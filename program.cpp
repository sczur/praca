#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	if (x < 0) {
		cerr << "Niedozwolona liczba (<0)";
		return 0;
	}

	cout << x;
	return 0;
}