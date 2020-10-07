#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);

	ptr = &b;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);
}