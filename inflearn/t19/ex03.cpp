// 일의 자릿수가 3, 6, 9인 경우 *
// 1 2 * 4 5 * 7 8 * 10 11 12 *

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		int k = i % 10; //일의 자리 가져오기
		if (k == 3 || k == 6 || k == 9) {
			printf("* ");
		}
		else {
			printf("%d ", i);
		}
	}
	printf("\n");
}