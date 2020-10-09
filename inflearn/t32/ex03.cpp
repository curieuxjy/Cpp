// return이 2번 있다면
#include <stdio.h>

int returnTwice() {
	printf("first\n");
	return 1; // return이 되는 순간 다음줄은 실행 안됨
	printf("second\n");
	return 2;
}

void noReturn() {
	printf("first\n");
	return; // void에서 return 사용해보기
	printf("second\n");
	return;
}

int main() {
	int a;
	a = returnTwice();

	printf("return : %d\n", a);

	noReturn();
}