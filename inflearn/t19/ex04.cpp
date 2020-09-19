/*

	n = 4
	1
	1 3
	1 3 5
	1 3 5 7

*/

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			//          j <= 2*i-1; j += 2
			printf("%d ", 2 * j - 1);
			//            j Ãâ·Â
		}
		printf("\n");
	}
}