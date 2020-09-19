// 중첩 for문

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			// 변수를 달리 설정하자.
			printf("*");
		}
		printf("\n");
	}
}