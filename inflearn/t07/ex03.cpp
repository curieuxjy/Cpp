#include <stdio.h>

int main() {
	float a, b;

	scanf_s("%f%f", &a, &b); // &: ������
	// space, enter�� ���� ����
	// ref: https://bymakers.tistory.com/6

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
	// ���� ���� �ٷ� ��� ����
}