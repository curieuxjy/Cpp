// 비교 연산자, 논리 연산자
#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);

	// bool: 진리 값을 저장하는 변수 (1바이트)
	// 참:1, 거짓:0
	bool p = a > b;
	bool q = a < b;
	bool r = a == b; 

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

	// a>= b, a<=b, a!=b
}