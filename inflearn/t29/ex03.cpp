// 3. code 읽어서 예상해보기
#include <stdio.h>

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	printf("%d\n", arr);

	for (int i = 3; i < 7; i++) {
		printf("%d %d\n", arr + i, *(arr + i));
	}
}