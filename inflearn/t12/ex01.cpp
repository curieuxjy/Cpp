#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// 0, 1

	if (n % 2 == 0) {
		printf("nÀº Â¦¼ö\n");
	}
	else {
		printf("nÀº È¦¼ö\n");
	}
}