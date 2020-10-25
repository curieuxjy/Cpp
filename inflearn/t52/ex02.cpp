/*
2. 범위 기반 for문을 사용하여 이차원 배열을 출력해 보세요.
*/

#include <iostream>

using namespace std;

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	/*
	for (int *n : arr) {
		for (int i = 0; i < 3; i++) {
			cout << n[i] << ' ';
		}
	}
	*/

	// 범위기반 for문
	// 래퍼런스 변수로
	for (int(&ln)[3] : arr) {
		for (int &col : ln) {
			cout << col << ' ';
		}
		cout << endl;
	}
	
	// 포인터로
	for (int(*ln)[3] = arr; ln < arr + 2; ln++) {
		for (int* c = *ln; c < *ln + 3; c++) {
			cout << *c << ' ';
		}
		cout << endl;
	}


	/*
	for (auto(&ln)[3] : arr) {
		for (auto &col : ln) {
			cout << col << ' ';
		}
		cout << endl;
	}
	*/
}