#include <stdio.h>

int main() {
	int i;
	scanf_s("%d", &i);

	// �ʱⰪ�� �����ص� �ǰ�
	// ������ �����ص� �ȴ�.
	// ������ �����ϸ� true�� ���ֵȴ�.
	for (; true; i++) {
		printf("%d", i);
	}
}