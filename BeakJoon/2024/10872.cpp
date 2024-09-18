#include <iostream>
using namespace std;

int main() {
	int i;
	int n;
	cin >> n;

	int fn = 1;

	for (i = 1; i <= n; i++) {
		fn *= i; // *= 는 자신을 오른쪽 값으로 곱해 넣는다는 대입(할당)연산자
	}

	cout << fn;
	return 0;
}
