#include "String_Pic.h"
#include "Picture.h"

String_Pic::String_Pic(const char* const * pLines, int nLines)
: P_Node(), _data(new char*[nLines]), _size(nLines) {
	// cout << "in String_Pic::const char* constructor... ";
	// showDebug();
	for (int i = 0; i < nLines; i++) {
		_data[i] = new char[strlen(pLines[i]) + 1];
		strcpy(_data[i], pLines[i]);
	}
}
String_Pic::~String_Pic() {
	for (int i = 0; i < _size; i++) { delete[] _data[i]; }
	delete[] _data;
}
int String_Pic::height() const { return _size; }
int String_Pic::width() const {
	int n = 0;
	for (int i = 0; i < _size; i++) {
		n = max(n, static_cast<int>(strlen(_data[i])));
	}
	return n;
}
void String_Pic::display(ostream& os, int row, int width) const {
	int start = 0;
	if (row >= 0 && row < height()) {
		os << _data[row];
		start = static_cast<int>(strlen(_data[row]));
	}
	pad(os, start, width);
}
Picture String_Pic::reframe(char c, char s, char t) { // no-op; nothing to frame
	_use++;
	return this;
	// calls private Picture constructor (Picture( P_Node* ))
}
void String_Pic::showDebug() const { cout << "String_Pic[" << this << "]" << endl; }
Picture* String_Pic::getPic() { return nullptr; }