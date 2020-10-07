// 포인터의 포인터
#include <stdio.h>

int main() {
	int a = 10;

	int* ptr;
	ptr = &a;

	int** ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("ptr_ptr = %d\n", ptr_ptr);
	printf("*ptr_ptr = %d\n", *ptr_ptr);
	printf("**ptr_ptr = %d\n", **ptr_ptr);

	// a = 10
	// &a = 14022820
	// ptr = 14022820
	// & ptr = 14022808
	// ptr_ptr = 14022808
	// * ptr_ptr = 14022820
	// * *ptr_ptr = 10

}