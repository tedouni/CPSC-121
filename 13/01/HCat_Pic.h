#pragma once
#include <iostream>
using namespace std;
#include "P_Node.h"
#include "Picture.h"
class HCat_Pic : public P_Node {
private:
	HCat_Pic(const Picture& left, const Picture& right);
	int height() const;
	int width() const;
	void display(ostream& os, int row, int wd) const;
	Picture reframe(char c, char s, char t);
	friend Picture operator|(const Picture& left, const Picture& right);
public:
	Picture* getPic();
private:
	Picture _left, _right;
};