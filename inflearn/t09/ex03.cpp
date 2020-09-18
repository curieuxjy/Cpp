/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요.(Z제외)
*/
#include <stdio.h>

int main() {
	char a;

	printf("알파벳을 입력하세요.\n");
	scanf_s("%c", &a);

	// char nextalpha = alpha + 1;
	printf("다음 알파벳은 %c 입니다.\n", a+1);
}