// exit(0);
// ���α׷��� �ٷ� ����

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int n;

		scanf_s("%d", &n);

		if (n <= 0) {
			printf("INPUT ERROR\n");
			exit(0);
		}
		sum += n;
	}
	printf("sum = %d\n", sum);
}