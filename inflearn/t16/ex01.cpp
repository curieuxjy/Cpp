#include <stdio.h>

int main() {
	int i;

	/*
	i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
	*/

	for (i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}

	printf("%d\n", i);

	// 일정하게 증가/감소되는 변수가 필요할 때
	// 배열의 모든 원소에 순차적으로 접근하고 싶을 때
	// 특정 횟수만큼 작업을 반복하고 싶을 때
}