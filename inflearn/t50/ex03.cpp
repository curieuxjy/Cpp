// ���� ��� for ��

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3, 4, 5, 7, 6, 9, 5, 2, 6, 8 };
	for (int n : arr) {
		cout << n << ' ';
		n++; // ���� ������ ����!
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
}