#include <stdio.h>

int main() {
	char a;
	
	scanf_s("%c", &a); // 숫자로 a에 대입

	printf("당신이 입력한 문자는 %c입니다.\n", a);
	// 숫자 a를 ascii code table의 문자로 변환
}
