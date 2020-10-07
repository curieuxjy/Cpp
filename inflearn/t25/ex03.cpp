#include <stdio.h>

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i));
		// arr + i == &arr[i]
		// *(arr + i) == *(&arr[i]) -> &arr[i] �ּҿ� ����ִ� ��
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		// ���� �� &arr[0]�� ptr�� ����
		// ptr�� ++�� �ϸ� &arr[i]�� ���ʷ� �Ѱ���
		printf("%d ", *ptr);
		// ptr�� ����Ű�� �ִ� �ּҿ� �ִ� ���� ���
	}
	printf("\n");
}