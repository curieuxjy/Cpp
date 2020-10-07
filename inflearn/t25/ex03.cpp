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
		// *(arr + i) == *(&arr[i]) -> &arr[i] 주소에 들어있는 값
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		// 선언 후 &arr[0]을 ptr에 넣음
		// ptr에 ++을 하면 &arr[i]를 차례로 넘겨줌
		printf("%d ", *ptr);
		// ptr이 가리키고 있는 주소에 있는 값을 출력
	}
	printf("\n");
}