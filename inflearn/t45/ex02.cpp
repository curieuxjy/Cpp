// ��ũ���� �Ű�����

#include <stdio.h>
/*
�Լ� �� �� �Ű�����
int square(int a) {
	return a * a;
}
*/

# define SQUARE(X) X * X

int main() {
	int a;
	scanf_s("%d", &a);
	// printf("%d\n", square(a));
	printf("%d\n", SQUARE(a));
	// SQUARE(a) == a * a
}