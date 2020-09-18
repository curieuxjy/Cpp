// += -= *= /= %=

#include <stdio.h>

int main() {
	int a = 5;

	a += 6; // a = a + 6;
	printf("%d\n", a);
	a *= 7;
	printf("%d\n", a);
	a -= 6;
	printf("%d\n", a);
	a %= 7; // a = a % 7;
	printf("%d\n", a);
}