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
	void is_that_palindrome() {
		string first = row.substr(0, row.size() / 2 + (row.size() % 2 != 0 ? 1 : 0));

		string second = row.substr((row.size() - row.size() / 2) - (row.size() % 2 != 0 ? 1 : 0));
		auto reverse {[](string& row) {
			int size = row.size() / 2;
			for (int i = 0; i < size; i++) {
				swap(row[i], row[row.size() - i - 1]);
			}
		}};

		reverse(second);
		if (first == second)
			result = row + " \033[32m is palindrome\033[0m";
		else
			result = row + " \033[31m isn't palindrome\033[0m";
	}
public:
	Palindrome(string row) : row{ row } { is_that_palindrome(); }
	Palindrome() : Palindrome("") {}
	void operator=(string some_row) {
		this->row = some_row;
		is_that_palindrome();
	}
	friend ostream& operator<<(ostream& out, Palindrome obj) {
		obj.is_that_palindrome();
		out << "\nresult: " << obj.result;
		return out;
	}
};

