#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
class P_Node;
class Picture {
public:
	Picture();
	Picture(const char* const * pLines, int nLines);
	Picture(const Picture& other);
	Picture& operator=(const Picture& other);
	~Picture();
	friend ostream& operator<<(ostream& os, const Picture& pic);
	friend Picture frame(const Picture& pic);
	friend Picture reframe(const Picture&, char, char, char);
	friend Picture operator&(const Picture& top, const Picture& bottom);
	friend Picture operator|(const Picture& left, const Picture& right);
	int height() const;
	int width() const;
	void display(ostream& os, int x, int y) const;
	friend class String_Pic;
	friend class Frame_Pic;
	friend class Hcat_Pic;
	friend class VCat_Pic;
	Picture(P_Node* pnode);



public:
	void showDebug() const;
private:
	P_Node* _pnode;
};