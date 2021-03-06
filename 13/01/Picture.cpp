#include "Picture.h"
#include "String_Pic.h"
#include "Frame_Pic.h"
#include "P_Node.h"
#include <iostream>
using namespace std;
Picture::Picture(P_Node* pnode) : _pnode(pnode) {
	pnode->_use++; // new code
}
Picture::Picture(const char* const * pLines, int nLines)
: _pnode(new String_Pic(pLines, nLines)) { }
Picture::Picture(const Picture& other) : _pnode(other._pnode) { other._pnode->_use++; }
Picture::~Picture() {
	if (--_pnode->_use == 0) { delete _pnode; }
}
// note this code protects against self-assignment
Picture& Picture::operator=(const Picture& other) {
	other._pnode->_use++;
	if (--_pnode->_use == 0) { delete _pnode; }
	_pnode = other._pnode;
	return *this;
}
Picture frame(const Picture& pic) {
	// creates a new Picture using pic._pnode for its constructor,
	// then calls on Frame_Pic's Picture& constructor
	return new Frame_Pic(pic._pnode, '+', '|', '-');
}
Picture reframe(const Picture& pic, char c, char s, char t) {
	return pic._pnode->reframe(c, s, t);
}
int Picture::height() const { return _pnode->height(); }
int Picture::width() const { return _pnode->width(); }
void Picture::display(ostream& os, int x, int y) const { _pnode->display(os, x, y); }
ostream& operator<<(ostream& os, const Picture& pic) {
	int ht = pic.height();
	for (int i = 0; i < ht; i++) {
		pic.display(os, i, 0);
		os << endl;
	}
	return os;
}

void Picture::showDebug() const {
	P_Node* pn = _pnode;
	Picture* pic;
	while ((pic = pn->getPic()) != nullptr) {
		cout << "---> ";
		pic->showDebug();
		pn = pic->_pnode;
	}
	cout << "]" << endl;
}