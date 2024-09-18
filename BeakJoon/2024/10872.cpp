#include <iostream>
using namespace std;

int main() {
	int i;
	int n;
	cin >> n;

	int fn = 1;

	for (i = 1; i <= n; i++) {
		fn *= i;
	}

	cout << fn;
	return 0;
}
