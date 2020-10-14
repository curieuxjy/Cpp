// 함수로 만들기
#include <stdio.h>

void swap1(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void swap2(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap3(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap1(a, b); // call-by-value
	printf("a = %d, b = %d\n", a, b);

	swap2(&a, &b); // call-by-reference
	printf("a = %d, b = %d\n", a, b);

	// c++에서 다시 배울 내용
	swap3(a, b); // call-by-reference 2
	printf("a = %d, b = %d\n", a, b);
}