#include <stdio.h>

int main() {
	// 1, 2, 4, 8, 16, 32 ...

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i *= 2) {
		printf("%d\n", i);
	}

	// printf("%d\n", i); //for문 안에서만 i 사용가능
}