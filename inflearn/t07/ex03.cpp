#include <stdio.h>

int main() {
	float a, b;

	scanf_s("%f%f", &a, &b); // &: 포인터
	// space, enter로 숫자 구분
	// ref: https://bymakers.tistory.com/6

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
	// 변수 없이 바로 출력 가능
}