// gets / puts : 문자열을 받는다 / 출력한다
//               stream

#include <stdio.h>

int main() {
	char str[100];

	gets_s(str);
	puts(str);
}

/*
scanf_s("%s", ...)로 받으면 한 줄 단위가 아니라 공백을 기준으로 함
scanf_S("%s", str); 에서 Hello, World!가 입력되었다면
str은 "Hello,"가 됨!
*/