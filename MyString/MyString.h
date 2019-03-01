#pragma once

#include <iostream>

using namespace std;
// MyString class declaration goes here

class myString {
private:
	char *str;
public:
	myString();
	myString(const char* charptr);
	myString(const myString& charptr);
	~myString();
	myString operator = (const myString &ref);
	myString operator + (const myString &ref);
	bool operator == (const myString &ref);
	const char* c_str();
};

ostream &operator<<(ostream &strm, myString &ref);