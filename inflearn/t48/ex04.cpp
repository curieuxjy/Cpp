// ����

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	// seed
	srand(time(NULL)); // 1970/01/01 00:00:00�κ��� ���� ��

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand());
		// 1~10������ ������ ���ڵ��� �ް� �ʹٸ�
		// printf("%d\n, rand() % 10 + 1);
	}
}