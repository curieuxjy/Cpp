// ��Ʈ ����
// �� ���� && || !
// ��Ʈ �� ���� & | ^ ~

#include <stdio.h>

int main() {
	char a = 12, b = 10;

	// 12 == 00001100
	// 10 == 00001010

	printf("%d\n", a & b); // and
	printf("%d\n", a | b); // or
	printf("%d\n", a ^ b); // xor
	printf("%d\n", ~a); // not(����)

	/*
	8
	14
	6
	-13
	*/
}