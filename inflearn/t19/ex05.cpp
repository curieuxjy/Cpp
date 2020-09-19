/*

	n = 4
	1
	1 2 3 
	1 2 3 4 5
	1 2 3 4 5 6 7

*/

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		//          i <= 2*n-1; i += 2
		for (int j = 1; j <= 2*i-1; j++) {
			//          j <= i;
			printf("%d ", j);
		}
		printf("\n");
	}
}