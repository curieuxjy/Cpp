// 범위 기반 for 문

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3, 4, 5, 7, 6, 9, 5, 2, 6, 8 };
	for (int n : arr) {
		cout << n << ' ';
		n++; // 값이 변하지 않음!
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
}