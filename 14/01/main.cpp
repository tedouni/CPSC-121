#include <iostream>
#include <string>
#include "Expr.h"



using namespace std;
void display(expr const& a)
{
    cout<<a<<" = "<<a.eval()<<endl;
}
int main()
{
    expr n(7);
    expr unary("-",5);
    expr binary("+",3,4);
    expr e(expr("*",unary,binary));
    //expr ternary(expr(unary != binary), expr("*",20,10),expr("/",20,10));
	
    //expr t(unary.eval() < binary.eval(), expr(22), expr ("*", 17, 3));

	//   ternary_node(const string& a, expr b, expr c, expr d)
	//   :op(a), left(b), middle(c), right(d) {}
	expr f("<", expr(unary), expr("*",20,10),expr("/",20,10));
    display(n);
    display(unary);
    display(binary);
    display(e);
	display(f);
    return 0;
}