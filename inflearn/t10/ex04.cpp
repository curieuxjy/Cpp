// 전치와 후치

#include <stdio.h>
int main() {
	int a = 10;
	int b,c;

	printf("---------전치 증가 연산---------\n");
	b = ++a; // 1. a에 1을 증가 시킴 2. a를 b에 대입
	// a += 1;
	// b = a;
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	a = 10; // reset
	printf("---------후치 증가 연산---------\n");
	c = a++; // 1. a를 c에 대입 2. a에 1을 증가 시킴
	// c = a;
	// a += 1;
	printf("a: %d\n", a);
	printf("c: %d\n", c);


}