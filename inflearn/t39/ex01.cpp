/*
구조체 만들기 : 여러개의 변수를 묶음

typedef int Pair[2];

Pair p; // int p[2];
p[0] = 3;
p[1] = 4;

다른 사람들이 각각이 x, y좌표를 의미한다는 것을 알아보기 어려움
*/

#include <stdio.h>

int main() {
	// typedef struct { int x, y; } Point;
	// typedef 생략 가능!
	struct Point { int x, y; } ;
	// 주로 구조체는 전역변수로 설정하기 때문에
	// 위에 구조체 선언하는 것은 main() 밖으로 꺼내기도 함
	
	Point p;

	// struct { int x, y; } p; 랑 같은 말

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
}

