//  함수
#include <stdio.h>

// 전역변수
int itemCnt = 0;
int money = 100;

void buyItem(int cost, int cnt) { // 매개변수
	// 아이템을 산다.
	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
}

int main() {
	int a; // 지역변수

	buyItem(30, 5);

	buyItem(20, 4);
}