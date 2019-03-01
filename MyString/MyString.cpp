// MyString implementation file

#include "MyString.h"
#include <cstring>

using namespace std;

myString::myString() {
	str = nullptr;
}

myString::myString(const char* charptr) {
	
	str = new char[strlen(charptr) + 1];
	strcpy_s(str, strlen(charptr) + 1, charptr);
}

myString::myString(const myString& charptr) {

	cout << "copy constructor called" << endl;
	if (charptr.str != nullptr) {
		str = new char[strlen(charptr.str) + 1];
		strcpy_s(str, strlen(charptr.str) + 1, charptr.str);
	}
	else {
		str = nullptr;
	}
}

myString::~myString() {
	delete[] str;
	cout << "destructor called" << endl;
}

myString myString::operator= (const myString &ref) {
	
	if (this != &ref) {
		delete[] this->str;
		str = new char[strlen(ref.str) + 1];
		strcpy_s(str, strlen(ref.str) + 1, ref.str);
	}
	return *this;
}

myString myString::operator + (const myString &ref) {
	myString a;

	int SIZE = strlen(ref.str) + strlen(this->str) + 1;

	a.str = new char[SIZE];
	strcpy_s(a.str, SIZE, this->str);
	strcat_s(a.str, SIZE, ref.str);

	return a;
}

bool myString::operator == (const myString &ref) {
	bool status = true;
	if (strlen(this->str) == strlen(ref.str)) {
		if (strcmp(this->str, ref.str) != 0) {
			status = false;
		}
	}
	else {
		status = false;
	}
	return status;
}

const char* myString::c_str() {
	return str;
}

ostream &operator<<(ostream &strm, myString &ref) {
	const char* a = ref.c_str();
	strm << a;
	return strm;
}
