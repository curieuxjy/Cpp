// t27 배열 포인터 : 배열을 가리키는 포인터
// t28 포인터 배열 : 포인터들이 배열
#include <stdio.h>

int main() {
	// 포인터 배열 선언
	int *ptr[4]; // 4개짜리 배열이 생기고, 각각은 포인터가 들어감
	// cf. 배열 포인터 선언 int(*ptr)[4];

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	ptr[0] = &a;
	ptr[1] = &c;
	ptr[2] = &d;
	ptr[3] = &b;

	printf("%d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
	printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
	// 3864956 3864932 3864920 3864944
	// 10 30 40 20

}