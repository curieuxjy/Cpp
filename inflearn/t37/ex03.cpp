// 3. 다음 프로그램의 실행결과 예측

#include <stdio.h>

void rec(int n) {
	if (n == 0) return;
	printf("%d-", n);
	rec(n - 1);
	printf("%d_", n);
}

int main() {
	rec(5);
}

// 5-4-3-2-1-1_2_3_4_5_