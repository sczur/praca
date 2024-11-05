#include <iostream>
using namespace std;

int silnia(int l) {
	int s = 1;
	for (int i = 2; i <= l; i++) {
		s *= i;
	}
	return s;
}

int main() {
	int x;
	cin >> x;
	cout << silnia(x);
	return 0;
}