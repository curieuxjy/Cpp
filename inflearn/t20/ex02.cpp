// 배열
#include <stdio.h>

int main() {
	int a[5]; // 배열선언 [크기]

	for (int i = 0; i <= 4; i++) {
		a[i] = i * 5;
	}
	for (int i = 0; i <= 4; i++) {
		printf("%d\n", a[i]);
	}
}