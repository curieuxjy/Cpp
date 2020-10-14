// factorial
// 5! = 5*4*3*2*1

#include <stdio.h>

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	printf("%d\n", factorial(5));
}