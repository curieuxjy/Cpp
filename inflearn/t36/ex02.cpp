#include <stdio.h>

void printArr(int arr[2][3]) { // 매개변수를 어떻게 주는지 확인
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
-> 0번째 행 주소가 함수로 넘어감
-> call-by-reference

*/