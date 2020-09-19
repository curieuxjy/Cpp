// do-while 예제
#include <stdio.h>

int main() {
	int n;

	do {
		printf("제발 0을 입력해주세요.\n");
		scanf_s("%d", &n);
	} while (n != 0);
	// 처음 한 번은 실행해야 할 때

	printf("드디어 0을 입력하셨군요.\n");
}