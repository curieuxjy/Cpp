/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값

*/

#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };

	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n", arr + 1);

	printf("&arr = %d\n", &arr);
	printf("&arr + 1 = %d\n", &arr + 1); // +12
	// &arr + 1 == &arr에 sizeof(*(&arr))==sizeof(arr)을 더한 값
}