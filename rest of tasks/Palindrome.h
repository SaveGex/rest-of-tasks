#pragma once
#include <ostream>
#include <string>
#include <algorithm>

using namespace std;

class Palindrome
{
private:
	string row{};
	string result{};
	void is_that_palindrome();
public:
	Palindrome(string row);
	Palindrome();
	void operator=(string some_row);
	friend ostream& operator<<(ostream& out, Palindrome obj);
};

