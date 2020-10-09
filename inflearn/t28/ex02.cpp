#include <stdio.h>

int main() {
	int arr[] = { 1, 2, 3, 4 };
	int* ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");
}