#include <stdio.h>

// ��������
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) { // �Ű�����
	if (money < cost) {
		printf("�ܾ��� �����մϴ�.");
		return -1; // else�� �Ⱦ��� return�� ���� ����
	}

	// �������� ���.
	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
	return 0;

	}

int main() {
	int result;

	result = buyItem(3000, 5);

	if (result == -1) {
		printf("���� �����Ͻñ���...\n");
	}

	buyItem(20, 4);
	buyItem(10, 2);
}