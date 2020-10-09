// 2. code 읽어서 예상해보기
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", *ptr);
}