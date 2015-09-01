/*
 * Programming Challenge 1
 */
#include <cassert>
#include <iostream>
using namespace std;

string greet (string name);
string checkExperience (char hasExperience);


template <typename X, typename A>
void btassert(A assertion);
void unittest (string s, char c);

int main (int argc, char* argv[]) {

	string userName;
	char programmedBefore = 'z';
	cout << "Welcome";
	cout << "Please enter your name";
	cin >> userName;
	cout << "Have you programmed in C++ before?";
	cin >> programmedBefore;
	
	unittest(userName, programmedBefore);
	
	return 0;
}


string greet (string name) {

	string theName;
	theName = name;
	
	return string("Nice to meet you, << name <<");
}

string checkExperience (char hasExperience) {

	if(hasExperience == 'Y')
	{
		return string("Welcome back");
	}
	else
	return string("Get ready to have some fun");
}
