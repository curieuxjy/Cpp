// 2^0 = 1
// 2^1 = 2
// 2^2 = 4
// ..
// 2^6 = 64

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// 2가지 변수를 동시에 초기화, 갱신 가능
	for (int i = 0, t = 1; i <= n, i++, t *= 2) {
		printf("2^%d = %d\n", i, t);
	}
}