/*
	1. ptr == &ptr[0]
	   arr == &arr[0]
	2. *ptr == ptr[0]
	   *arr == arr[0]
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� ��
	   arr + 1 == arr�� sizeof(*arr)�� ���� ��
*/

#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	int(*ptr)[3] = arr; // arr == &arr[0]

	// Ȯ���� ��
	// 1. ptr[i] == arr[i] 
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}

	// ptr = arr�̶�� ����
	// ptr = &arr[0] 
	// �� ptr�� arr[0]�� ����Ű�� �ִ�.

	// ptr[i] == *(ptr + i) == arr[i]
	// ptr�� �� ��ü�� ����Ű�� �����Ͱ� ptr�� 1�� ���� ������ �� ���� ���� ����Ų��.
	// 1.�� Ȯ�� �Ϸ�

	// 1�� ���� 2�� �ڿ������� ����
	// ��� �Ϸ�
}