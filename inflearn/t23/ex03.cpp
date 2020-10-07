// 문자열 입력
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "Hello";
	// sizeof(str) / sizeof(char) - 1(null)

	int len;

	len = strlen(str);
	printf("문자열의 길이는 %d\n", len);
}