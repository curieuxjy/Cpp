// ����ü ���� �Լ�
#include <stdio.h>

struct Time {
	int h, m, s;

	int totalSec() {
		return 3600 * h + 60 * m + s;
		// �Ϲ� ���� ����ϵ��� ����� �� ����
	}
};

int main() {
	Time t = { 1, 22, 48 }; // 1�ð� 22�� 48��

	printf("%d\n", t.totalSec());
	// t�ȿ� totalSec()�� ����
}