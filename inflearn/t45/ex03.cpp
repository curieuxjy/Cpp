#include <stdio.h>

#define SQUARE(X) ((X) * (X))
/*
��ũ���� �Ű����� ������!
1. ���� ��ü�� ��ȣ (X)
2. ��ũ�� ��ü�� ��ȣ (��)
*/ 

int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d\n", SQUARE(a - 1));
}