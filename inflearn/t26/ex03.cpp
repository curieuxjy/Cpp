// �迭 ��ü�� ����Ű�� ������
#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };

	int(*ptr_arr)[3]; // ���� 3�� int�� �迭�� ����Ű�� �����͸� ����
	ptr_arr = &arr;
	// int(*ptr_arr)[3] = &arr; �� ����

	for (int i = 0; i < 3; i++) {
		printf("%d\n", (*ptr_arr)[i]);
	}
}