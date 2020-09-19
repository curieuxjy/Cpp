#include <stdio.h>

int main() {
	int i;
	scanf_s("%d", &i);

	// 초기값을 생략해도 되고
	// 증감을 생략해도 된다.
	// 조건을 생략하면 true로 간주된다.
	for (; true; i++) {
		printf("%d", i);
	}
}