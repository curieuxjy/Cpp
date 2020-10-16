#include <stdio.h>

struct Time {
	int h, m, s;
};

int totalSec(Time t) {
	return 3600 * t.h + 60 * t.m + t.s;
}

int main() {
	Time t = { 1, 22, 48 }; // 1시간 22분 48초

	printf("%d\n", totalSec(t));
}