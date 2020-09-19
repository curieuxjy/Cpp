// 2^0 = 1
// 2^1 = 2
// 2^2 = 4
// ..
// 2^6 = 64

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	int t = 1;
	for (int i = 0; i<= n, i++) {
		printf("2^%d = %d\n", i, t);
		t *= 2;
	}
}