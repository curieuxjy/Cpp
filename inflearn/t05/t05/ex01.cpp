#include <stdio.h>

int main() {
	/*
	// int: 32bit(4byte) ������ ��� �׸�
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

	// float: 32bit(4byte) �Ǽ��� ��� �׸�
	float a = 9.8;
	float b = 3.14;
	// + 314 * 10^(-2)
	// ũ�Ⱑ �۾Ƽ� ���� �߻�
	// float���� double�� ���� ��� -> 64��Ʈ
	// ��������� 2�� = ǥ�� ������ ������ ������ ����

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

}