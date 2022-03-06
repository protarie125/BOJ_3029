#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string l1, l2;
	cin >> l1 >> l2;

	auto h1 = stoi(l1.substr(0, 2));
	auto m1 = stoi(l1.substr(3, 2));
	auto s1 = stoi(l1.substr(6));

	auto h2 = stoi(l2.substr(0, 2));
	auto m2 = stoi(l2.substr(3, 2));
	auto s2 = stoi(l2.substr(6));

	auto h = h2 - h1;
	auto m = m2 - m1;
	auto s = s2 - s1;
	if (s < 0) {
		s += 60;
		m -= 1;
	}

	if (m < 0) {
		m += 60;
		h -= 1;
	}

	if (h < 0) {
		h += 24;
	}

	if (0 == h && 0 == m && 0 == s) {
		h += 24;
	}

	cout << setfill('0') << setw(2) << h << ':'
		<< setfill('0') << setw(2) << m << ':'
		<< setfill('0') << setw(2) << s;

	return 0;
}