#include <iostream>
#include <iostream>

using namespace std;
class expr_node
{
    friend ostream& operator<<(ostream & o, const expr_node&);
    
public:
    int use;
    expr_node():use(1) {}
    virtual ~expr_node() {}
    virtual void print(ostream &) const = 0;
    virtual expr_node* copy() const = 0;
    virtual int eval() const = 0;
    
};

ostream& operator<<(ostream & os, const expr_node & e)
{
    e.print(os);
    return os;
}

class int_node:public expr_node
{
    friend class expr_node;
    
    int n;
    
public:
    int_node(int k):n(k) {}
    void print(ostream & os) const {os << n;}
    expr_node* copy() const {return new int_node(*this);}
    int eval() const {return n;}
};


class unary_node:public expr_node
{
    friend class expr_node;
    
    string op;
    expr_node *opnd;
    
public:
    unary_node(const string & a, expr_node* b):op(a), opnd(b) {}
    void print(ostream & os) const {os << "(" << op << *opnd << ")";}
    expr_node* copy() const {return new unary_node(*this);}
    int eval() const;
};


int unary_node::eval() const
{
    if (op == "-")
        return -opnd->eval();
    return opnd->eval();
}


class binary_node:public expr_node
{
    friend class expr_node;
    
    string op;
    expr_node* left;
    expr_node* right;
    
public:
    binary_node(const string& a, expr_node* b, expr_node* c):op(a), left(b), right(c) {}
    void print(ostream & os) const {os << "(" << *left << op << *right << ")";}
    expr_node* copy() const {return new binary_node(*this);}
    int eval() const;
};


int binary_node::eval() const
{
    int op1 = left->eval();
    int op2 = right->eval();
    
    if (op == "-") return op1 - op2;
    if (op == "+") return op1 + op2;
    if (op == "*") return op1 * op2;
    if (op == "/") return op1 / op2;
    return 0;
}
class expr
{
    friend ostream& operator<<(ostream &, const expr&);
	friend class expr_node;
    expr_node* p;
    
public:
    expr(int); 
    expr(const string&, expr); 
    expr(const string&, expr, expr);
    expr(const string& op, expr left, expr middle, expr right);
    expr(const expr&);
    expr& operator=(const expr&);
    expr_node* copy() const {return p->copy();}
    
    bool operator == (expr const& other) const
    {
        return (*this == other) ? true: false;
    }
    bool operator != (expr const& other) const
    {
        return (*this != other) ? true: false;
    }
    bool operator < (expr const& other) const
    {
        return (*this < other) ? true: false;
    }
    bool operator <= (expr const& other) const
    {
        return (*this <= other) ? true : false;
    }
    bool operator >= (expr const& other) const
    {
        return (*this >= other) ? true : false;
    }
    bool operator > (expr const& other) const
    {
        return (*this > other);
    }
    
    
    ~expr();
    int eval() const { return p->eval();}
};

class ternary_node : public expr_node
{
    friend class expr_node;
    string op;
    expr left;
    expr middle;
    expr right;

public:
    ternary_node(const string& a, expr b, expr c, expr d)
    :op(a),left(b),middle(c),right(d) {}
    
    int eval() const;
    void print(ostream& os) const;
    expr_node* copy() const {return new ternary_node(*this);}

    
};
expr::expr(int n)
{
    p = new int_node(n);
}
expr::expr(const string & op, expr t)
{
    p = new unary_node(op, t.copy());
}
expr::expr(const string& op, expr a, expr b)
{
    p = new binary_node(op, a.copy(), b.copy());
}
expr::expr(const expr & t)
{
    p = t.p;
    ++(p->use);
}

expr::expr(const string& op, expr left, expr middle, expr right)
{
    p= new ternary_node(op,left,middle,right);
}

expr::~expr()
{
    if (--(p->use) == 0)
        delete p;
}
expr& expr::operator=(const expr & rhs)
{
    ++(rhs.p->use);
    if (--(p->use) == 0)
    {
        delete p;
    }
    p = rhs.p;
    return *this;
}


ostream& operator<<(ostream & o, const expr & t)
{
    t.p->print(o);
    return o;
}



void ternary_node::print(ostream& os) const
{
    os<<"("<<left<<"?"<<middle<<" : "<<right<<")";
}

int ternary_node::eval() const
{
    if (left.eval())
    {
        return middle.eval();
    }
    else
        return right.eval();
}


