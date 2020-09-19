// 2^0 = 1
// 2^1 = 2
// 2^2 = 4
// ..
// 2^6 = 64

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	int i = 0, t = 1;
	while (i <= n) {
		printf("2^%d = %d\n", i, t);
		i++;
		t *= 2;
	}
}