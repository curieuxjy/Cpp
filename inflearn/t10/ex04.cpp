// ��ġ�� ��ġ

#include <stdio.h>
int main() {
	int a = 10;
	int b,c;

	printf("---------��ġ ���� ����---------\n");
	b = ++a; // 1. a�� 1�� ���� ��Ŵ 2. a�� b�� ����
	// a += 1;
	// b = a;
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	a = 10; // reset
	printf("---------��ġ ���� ����---------\n");
	c = a++; // 1. a�� c�� ���� 2. a�� 1�� ���� ��Ŵ
	// c = a;
	// a += 1;
	printf("a: %d\n", a);
	printf("c: %d\n", c);


}