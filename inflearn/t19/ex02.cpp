// 자연수 입력 -> 약수 구하기
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// 나누기 2!
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) {
			printf("%d, ", i);
		}
	}
	printf("%d\n", n);
}