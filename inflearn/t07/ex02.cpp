#include <stdio.h>

int main() {
	float a, b;

	scanf_s("%f%f", &a, &b); // &: ������
	// space, enter�� ���� ����
	// ref: https://bymakers.tistory.com/6

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
}