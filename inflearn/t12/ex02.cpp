#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// �������� ǥ����� �� �ִ�. �ϴ� c������ ����
	if (n % 2) {
		printf("n�� Ȧ��\n");
	}
	else {
		printf("n�� ¦��\n");
	}
}