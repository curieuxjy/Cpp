#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// 제한적인 표기법일 수 있다. 일단 c에서는 가능
	if (n % 2) {
		printf("n은 홀수\n");
	}
	else {
		printf("n은 짝수\n");
	}
}