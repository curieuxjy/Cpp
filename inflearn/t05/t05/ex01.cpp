#include <stdio.h>

int main() {
	/*
	// int: 32bit(4byte) 정수를 담는 그릇
	int a = 5;
	int b = 3;

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int nam = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, nam);
	*/

	// float: 32bit(4byte) 실수를 담는 그릇
	float a = 9.8;
	float b = 3.14;
	// + 314 * 10^(-2)
	// 크기가 작아서 오차 발생
	// float보다 double을 많이 사용 -> 64비트
	// 저장공간이 2배 = 표현 가능한 숫자의 개수는 제곱

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

}