/*
1.
* ���� �ϳ��� �Ű������� �Է�
* �� ���� ¦���̸� 0, Ȧ���̸� 1�� ��ȯ�ϴ� �Լ�
*/
#include <stdio.h>

int parity(int n) {
	if (n % 2 == 0) {
		return 0;
	}
	return 1;
}
/*
int parity(int n) {
	return (n % 2 + 2) % 2;
}
*/

int main() {
	printf("%d\n", parity(5));
	printf("%d\n", parity(-3));
	printf("%d\n", parity(6));
}