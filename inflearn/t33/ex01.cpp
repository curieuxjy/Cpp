// call-by-value
// call-by-reference

#include <stdio.h>

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b);

	int tmp = a;
	a = b;
	b = tmp;

	printf("a = %d, b = %d\n", a, b);
}