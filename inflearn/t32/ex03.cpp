// return�� 2�� �ִٸ�
#include <stdio.h>

int returnTwice() {
	printf("first\n");
	return 1; // return�� �Ǵ� ���� �������� ���� �ȵ�
	printf("second\n");
	return 2;
}

void noReturn() {
	printf("first\n");
	return; // void���� return ����غ���
	printf("second\n");
	return;
}

int main() {
	int a;
	a = returnTwice();

	printf("return : %d\n", a);

	noReturn();
}