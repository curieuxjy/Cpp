#include <stdio.h>

// 매크로로 control 하기
#define FOR(I,S,E) for (int (I) = (S); (I) <= (E); (I)++)
#define LOOP while (true)

int main() {
	/*
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}
	*/

	FOR(i, 1, 10) {
		printf("%d ", i);
	}

	LOOP{
		printf("*");
	}
}