#include <stdio.h>

int main() {
	int a;
	printf("숫자 입력 : ");
	scanf_s("%d", &a);

	printf("%d의 ASCII 문자 : %c\n", a, a);
}