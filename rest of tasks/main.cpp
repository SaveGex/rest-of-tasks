#include <iostream>
#include <vector>
#include <random>
#include <chrono>

#include "Palindrome.h"

using namespace std;

int main() {
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

	return 0;
}