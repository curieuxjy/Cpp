#include <stdio.h>

int main() {
	char a;
	printf("문자 입력 : ");
	scanf_s("%c", &a); // 숫자로 a에 대입

	printf("%c의 ASCII 값 : %d\n", a, a);
}
