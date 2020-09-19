// 중첩 if 문
// 중괄호 코딩 스타일

#include <stdio.h>

int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b) {
		// a > b > c
		// a > c > b
		// c > a > b
		if (a > c)
			printf("%d\n", a);
		else
			printf("%d\n", c);
	}
	// else + if = else if
	else if (b > c)
		printf("%d\n", b);
	else
		printf("%d\n", c);
	// 1줄의 명령어만 들어있을 경우, 중괄호 생략가능
}