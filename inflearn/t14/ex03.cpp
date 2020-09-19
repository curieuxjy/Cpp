//goto
#include <stdio.h>

int main() {
	int choice;

	makeChoice:

	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정 : 3\n");
	printf("크레딧 : 4\n");

	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("새 게임\n");
		break; //break를 안해주면 아래 case 모두 실행
	case 2:
		printf("불러오기\n");
		break;
	case 3:
		printf("설정\n");
		break;
	case 4:
		printf("크레딧\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		goto makeChoice; // 권장하지 않음!
		break; //형식상 적어줌
	}
}