#include <stdio.h>

// ��������
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) { // �Ű�����
	if (money >= cost) {
		// �������� ���.
		itemCnt += cnt;
		money -= cost;
		printf("�������� �����߽��ϴ�.\n");
		printf("  ������ ���� : %d\n", itemCnt);
		printf("  �ܾ� : %d\n", money);
		return 0;
	}
	else {
		printf("�ܾ��� �����մϴ�.\n");
		return -1;
	}
	
}

int main() {
	int result;

	result = buyItem(3000, 5);

	if (result == -1) {
		printf("���� �����Ͻñ���...\n");
	}

	buyItem(20, 4);
}