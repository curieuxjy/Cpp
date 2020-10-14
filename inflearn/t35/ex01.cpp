// 재귀함수
// recursion

#include <stdio.h>

void rec(int n) {
	// 종료 조건
	if (n > 5) return;

	printf("n = %d\n", n);
	rec(n+1);
}

int main() {
	rec(1);
}