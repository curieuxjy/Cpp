// 문자열 입력
#include <stdio.h>

int main() {
	char s[100];

	scanf_s("%s", s, sizeof(s)); 
	//scanf_s 함수에는 2개의 인자 필요
	printf("%s\n", s);
}