#include <stdio.h>

int main() {
	//array
	int arr[] = { 3, 1, 4, 6, 8 }; //�߰�ȣ�� ���� �迭
	// ũ�⸦ ������ ���� ����

	// int -> 4byte
	// sizeof(arr) ũ��� for loop ����

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}