#include <stdio.h>

#define SQUARE(X) ((X) * (X))
/*
매크로의 매개변수 주의점!
1. 변수 자체에 괄호 (X)
2. 매크로 전체에 괄호 (식)
*/ 

int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d\n", SQUARE(a - 1));
}