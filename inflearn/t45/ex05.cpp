#include <stdio.h>

// ��ũ�η� control �ϱ�
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