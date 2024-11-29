#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <Windows.h>

#include "Palindrome.h"

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Palindrome some_pal("citticat12321tacittic");
	cout << some_pal << '\n' << '\n';

#pragma region find_max
	vector<float> some_arr;
	static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	uniform_real_distribution<float> dist(0.0f, 9.999f);

	for (int i = 0; i < 100; i++)
		some_arr.push_back(dist(rng));


	float min = some_arr[0];
	for (float digit : some_arr) {
		if (digit < min)
			min = digit;
		cout << digit << ' ';
	}
#pragma endregion /*find_max*/
	cout << '\n' << min;

#pragma region counting letters
    string sentence = "Write a program that counts the number of vowels and consonants in a given English text.";
    int vowel_letters = 0;
    int consonant_letters = 0;

    for (int i = 0; i < sentence.size(); i++) {
        char ch = sentence[i];
		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u') {
            vowel_letters++;
        }
		else if(isalpha(ch)){
            consonant_letters++;
        }
    }
#pragma endregion /*counting letters*/

    cout << "Text: " << sentence << endl;
    cout << "Vowels: " << vowel_letters << endl;
    cout << "Consonants: " << consonant_letters << endl;
	return 0;
}