// 변수 다루기
#include <iostream>

using namespace std;

int main() {
	int a(10); // == int a = 10; 초기화

	int b(a);
	a = 5; // 대입

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}