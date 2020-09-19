#include <stdio.h>

int main() {
	//1~n까지 숫자의 합을 출력

	int n;
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}