//  �Լ�
#include <stdio.h>

// ��������
int itemCnt = 0;
int money = 100;

void buyItem(int cost, int cnt) { // �Ű�����
	// �������� ���.
	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
}

int main() {
	int a; // ��������

	buyItem(30, 5);

	buyItem(20, 4);
}