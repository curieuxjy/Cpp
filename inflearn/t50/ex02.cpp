// 범위 기반 for문

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	/*
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	*/
	
	for (int n : arr) {
		cout << n << endl;
	}
}