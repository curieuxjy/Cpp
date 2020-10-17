// 범위 기반 for 문

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3, 4, 5, 7, 6, 9, 5, 2, 6, 8 };
	for (int &n : arr) { // 래퍼런스 변수
		cout << n << ' ';
		n++; // 값이 변할 수 있음
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
}