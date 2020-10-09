// 2개의 매개변수를 받아서 합을 return
// void : 함수의 반환값이 없음
// int : 반환값이 정수형

#include <stdio.h>

int plus(int a, int b) {
	return a + b;
}

int main() { // main은 자동으로 0을 return
	int sum = plus(3, 5);
	printf("%d\n", sum);
}