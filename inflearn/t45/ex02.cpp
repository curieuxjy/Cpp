// 매크로의 매개변수

#include <stdio.h>
/*
함수 일 때 매개변수
int square(int a) {
	return a * a;
}
*/

# define SQUARE(X) X * X

int main() {
	int a;
	scanf_s("%d", &a);
	// printf("%d\n", square(a));
	printf("%d\n", SQUARE(a));
	// SQUARE(a) == a * a
}