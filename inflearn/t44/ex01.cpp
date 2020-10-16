// 상수, 대문자로 명명
#include <stdio.h>

int main() {
	const float PI = 3.141592;

	float a = PI;
	float b = 2 * a;

	printf("π = %.2f\n", PI);
	printf("&PI = %d\n", &PI);
	printf("a = %.2f\n", a);
	printf("&a = %d\n", &a);
	printf("b = %.2f\n", b);
	printf("&b = %d\n", &b);
}