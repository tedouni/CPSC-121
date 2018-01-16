
//Picture.h header file
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Picture
{
private:
	int _height, _width;
	char *_data;
	char position(int r, int c) const; 
	char& position(int r, int c);
	static int max(int a, int b); //used to find max value
	void blockcopy(int r, int c, Picture const& other); // used to copy all characters  

public:
	Picture(const char* lines[], int nlines);
	Picture(int height, int width);
	Picture(Picture const& other);
	Picture& operator=	(Picture const& other);
	~Picture()
	{
		delete[] _data;
	}
	friend Picture frame	(Picture const& pic);
	friend Picture operator | (Picture const& p1, Picture const& p2);
	friend Picture operator & (Picture const& p1, Picture const& p2);
	friend ostream& operator<<(ostream&, const Picture& p);

};

