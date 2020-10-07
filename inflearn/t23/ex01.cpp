// 문자열
#include <stdio.h>

int main() {
	char arr[] = "Hello"; // = {"H", "e", "l", "l", "o"};
	printf("%s\n", arr);

	printf("배열의 크기 : %d\n", sizeof(arr) / sizeof(char));

	// char arr[] = "abc" = { "a", "b", "c", "\0"(null) };
	// 문자열을 출력하거나 뒤에 나올 문자열에 관련된 함수를 실행시키면
	// \0이 문자열의 중간에 나온다 하더라도 그 이후로는 처리하지 않음
}