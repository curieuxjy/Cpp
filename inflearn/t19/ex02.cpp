// �ڿ��� �Է� -> ��� ���ϱ�
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// ������ 2!
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) {
			printf("%d, ", i);
		}
	}
	printf("%d\n", n);
}