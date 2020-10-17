#include <iostream>

using namespace std;

int main() {
	// r-value : 오른쪽 변형할 수 없는 값
	// l-value : 왼쪽 변형할 수 있는 값

	int a(5);
	int& r1 = a;
	int&& r2 = 3;
	int&& r3 = a * a;
}