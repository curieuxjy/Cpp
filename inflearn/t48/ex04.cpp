// 난수

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	// seed
	srand(time(NULL)); // 1970/01/01 00:00:00로부터 지난 초

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand());
		// 1~10까지의 랜덤한 숫자들을 받고 싶다면
		// printf("%d\n, rand() % 10 + 1);
	}
}