#include <stdio.h>

int main() {
	int arr[10];

	printf("arr�� �� : %d\n", arr);
	// arr = &arr[0]
	// arr+1 = &arr[1]
	
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
		printf("&arr[%d] = %d\n", i, &arr[i]);
		// 4byte�� ����� ��

		printf("arr + %d = %d\n", i, arr + i);
		// arr+i = &arr[i]
	}



}