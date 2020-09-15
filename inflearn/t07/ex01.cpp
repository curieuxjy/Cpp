// 사용자 입력 받기
#include <stdio.h>

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b); // &: 포인터
	// space, enter로 숫자 구분
	// ref: https://bymakers.tistory.com/6

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
}