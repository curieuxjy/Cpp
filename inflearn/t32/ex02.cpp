// 2���� �Ű������� �޾Ƽ� ���� return
// void : �Լ��� ��ȯ���� ����
// int : ��ȯ���� ������

#include <stdio.h>

int plus(int a, int b) {
	return a + b;
}

int main() { // main�� �ڵ����� 0�� return
	int sum = plus(3, 5);
	printf("%d\n", sum);
}