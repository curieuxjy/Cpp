// 메모리 따져보기
#include <stdio.h>

struct Point { int x, y; };
// 메모리에서 아무일도 일어나지 않음

int main() {
	
	Point p;
	/*
	메모리상에 4바이트의 공간이 2개 생김
	_________________
	|  p.x  |  p.y  |   = p : 8byte
	-----------------
	  4byte   4byte

	*/ 

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}