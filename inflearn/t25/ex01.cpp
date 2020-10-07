#include <stdio.h>

int main() {
	int a = 10;
	int* ptr_a;
	ptr_a = &a;
	// int* ptr_a = &a; 와 같다

	// int* ptr_a = &a; -> 포인터인 ptr_a에 a의 주소값을 넣겠다
	// *ptr_a = 20; 포인터 ptr_a가 가리키는 변수에 20을 넣겠다

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1);

	// int -> 4byte
	// "포인터에 더하는 값 * 자료형 크기" 크기 만큼 증가
}