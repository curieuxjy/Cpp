#include <stdio.h>

int main() {
	//array
	int arr[] = { 3, 1, 4, 6, 8 }; //중괄호로 원소 배열
	// 크기를 생략할 수도 있음

	// int -> 4byte
	// sizeof(arr) 크기로 for loop 돌기

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}