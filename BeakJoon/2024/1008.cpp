#include <iostream>
using namespace std;

int main(){
    double A, B;
    
    cin >> A >> B;

    // 오차범위가 10-9 이하여야 하기 때문에, 출력 할 소수점 자리를 9개 이상 출력하기
    cout.precision(15); // cout.precision은 출력 할 실수 전체 자리수를 n자리로 표현한 것.(소수점 아래로 n자리만큼 고정하는 것 아님)
    cout << A / B;
    return 0;
}
