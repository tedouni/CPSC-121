//Picture.cpp file 
#include "Picture.h"


Picture::Picture(const char* lines[], int nlines) : _height(nlines)
{
	int maxlen = 0;
	for (int i = 0; i < _height; i++)
	{
		int len = strlen(lines[i]);

		if (maxlen < len)
			maxlen = len;
	}

	_width = maxlen;
	_data = new char[_height*_width];
	memset(_data, ' ', _height*_width);

	char *p = _data;
	for (int i = 0; i < _height; i++)
	{
		memcpy(p, lines[i], strlen(lines[i]));
		p += _width;
	}
}
Picture::Picture(int height, int width) : _height(height), _width(width), _data(new char[_height*_width])
{
	memset(_data, ' ', _height*_width);
}
Picture::Picture(Picture const& other) : _height(other._height), _width(other._width), _data(new char[other._height*other._width])
{
	blockcopy(0, 0, other);
}
Picture& Picture:: operator=(Picture const& other)
{
	if (this != &other)
	{
		delete[] _data; // delete current value
		this->_height = other._height;
		this->_width = other._width;
		blockcopy(0, 0, other);
	}
	return *this;
}

int Picture::max(int a, int b)
{
	return (a > b) ? a : b;
}

Picture frame(Picture const& pic)
{
	Picture fpic(pic._height + 2, pic._width + 2);

	for (int i = 1; i < fpic._height-1; i++)
	{
		fpic.position(i, 0) = '|';
		fpic.position(i, fpic._width - 1) = '|';
	}

	for (int j = 1; j < fpic._width-1; j++)
	{
		fpic.position(0, j) = '-';
		fpic.position(fpic._height - 1, j) = '-';
	}

	fpic.position(0, 0) = '+';
	fpic.position(0, fpic._width - 1) = '+';
	fpic.position(fpic._height - 1, 0) = '+';
	fpic.position(fpic._height - 1, fpic._width - 1) = '+'; 
	fpic.blockcopy(1, 1, pic);

	return fpic;
}

void Picture::blockcopy(int r, int c, Picture const& other) // used to copy
{
	for (int i = 0; i < other._height; i++)
	{
		for (int j = 0; j < other._width; j++)
			position(i + r, j + c) = other.position(i, j);
	}
}

char Picture::position(int r, int c) const
{
	return _data[r*_width + c];
}
char& Picture::position(int r, int c)
{
	return _data[r*_width + c];
}
Picture operator | (Picture const& p1, Picture const& p2)
{
	Picture r(Picture::max(p1._height, p2._height), p1._width + p2._width);
	
	r.blockcopy(0, 0, p1);
	r.blockcopy(0, p1._width, p2);

	return r;

}
Picture operator & (Picture const& p1, Picture const& p2)
{
	Picture r(p1._height + p2._height, Picture::max(p1._width, p2._width));
	
	r.blockcopy(0, 0, p1);
	r.blockcopy(p1._height, 0, p2);

	return r;
}

ostream& operator<<(ostream& os, const Picture& p)
{
	for (int i = 0; i < p._height; i++)
	{
		for (int j = 0; j < p._width; j++)
		{
			os << p.position(i, j);
		}
		os << endl;
	}

	return os;
}

