#include <stdio.h>

// 전역변수
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) { // 매개변수
	if (money < cost) {
		printf("잔액이 부족합니다.");
		return -1; // else를 안쓰고 return을 만나 종료
	}

	// 아이템을 산다.
	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
	return 0;

	}

int main() {
	int result;

	result = buyItem(3000, 5);

	if (result == -1) {
		printf("돈이 부족하시군요...\n");
	}

	buyItem(20, 4);
	buyItem(10, 2);
}