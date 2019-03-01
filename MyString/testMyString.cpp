// test driver code goes here
//============================
//Name : Logan Dick
//Date : 3/01/2019
//Programing assignment 5
//Description : myString
//Bugs : dealing with nullptr.
//============================
#include "MyString.h"

using namespace std;

int main(){
	//test default constructor
	myString s1;

	//test constructor
	myString s2("Hello");
	myString s3(" World!");
	myString s4(" World!");

	//overloaded == function
	cout << "overloaded == function" << endl;
	if (s2 == s3) {
		cout << s2 <<" = " << s3 << endl;
	}
	else {
		cout << s2 << " != " << s3 << endl;
	}

	if (s3 == s4) {
		cout << s3 << " = " << s4 << endl;
	}
	else {
		cout << " != " << endl;
	}

	// overloaded = operator
	cout << "overloaded = operator" << endl;
	s1 = s2;

	cout << s1 << " = " << s2 << endl;
	

	// overloaded + operator
	cout << "overloaded + operator & overloaded << operator" << endl;
	s1 = s2 + s3;
	cout << s1 << " = " << s2 << s3 << endl;

	myString s4 = "hello";
	myString s5 = "hey";
	myString s6 = "hi";

	cout << " assigning  s4 to s5 and s6" << endl;
	s5 = s6 = s4;
	cout << s4 << s5 << s6 << endl;


	return 0;
}