#include <stdio.h>

void printArr(int arr[2][3]) { // �Ű������� ��� �ִ��� Ȯ��
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printArr(arr);
}

/*

void printArr(int arr[2][3])
== void printArr(int *(arr)[3])
_________________________________________

printArr(arr) == printArr(&arr[0])
-> 0��° �� �ּҰ� �Լ��� �Ѿ
-> call-by-reference

*/