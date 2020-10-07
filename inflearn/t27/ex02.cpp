/*
	1. ptr == &ptr[0]
	   arr == &arr[0]
	2. *ptr == ptr[0]
	   *arr == arr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
	   arr + 1 == arr에 sizeof(*arr)을 더한 값
*/

#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	int(*ptr)[3] = arr; // arr == &arr[0]

	// 확인할 것
	// 1. ptr[i] == arr[i] 
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}

	// ptr = arr이라는 말은
	// ptr = &arr[0] 
	// 즉 ptr은 arr[0]을 가리키고 있다.

	// ptr[i] == *(ptr + i) == arr[i]
	// ptr은 행 전체를 가리키는 포인터고 ptr에 1을 더할 때마다 그 다음 행을 가리킨다.
	// 1.번 확인 완료

	// 1에 의해 2번 자연스럽게 성립
	// 결론 완료
}