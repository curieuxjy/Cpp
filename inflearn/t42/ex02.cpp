// 구조체 안의 함수
#include <stdio.h>

struct Time {
	int h, m, s;

	int totalSec() {
		return 3600 * h + 60 * m + s;
		// 일반 변수 사용하듯이 사용할 수 있음
	}
};

int main() {
	Time t = { 1, 22, 48 }; // 1시간 22분 48초

	printf("%d\n", t.totalSec());
	// t안에 totalSec()이 있음
}