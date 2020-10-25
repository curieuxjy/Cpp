/*
2. ���� ��� for���� ����Ͽ� ������ �迭�� ����� ������.
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

	// ������� for��
	// ���۷��� ������
	for (int(&ln)[3] : arr) {
		for (int &col : ln) {
			cout << col << ' ';
		}
		cout << endl;
	}
	
	// �����ͷ�
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