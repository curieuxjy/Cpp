#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int* col = *row; col < *row + 3; col++) {
			printf("%d ", *col);
		}
		printf("\n");
	}
	// row는 3개짜리 배열을 가리키고 있으므로
	// *row 자체가 하나의 배열을 의미
	// 따라서 col에는 *row, 즉 &(*row)[0]이 들어감
}