// 포인터 pointer : 변수의 주소를 저장하는 변수

#include <stdio.h>

int main() {
	int a = 20;
	char c = 'h';

	int *ptr_a; // 가르킬 변수의 형 *포인터 이름
	char* ptr_c;

	ptr_a = &a; // &변수 : 주소값


	printf("a의 값 : %d\n", a);
	printf("a의 주소 : %d\n", &a);
	printf("ptr_a에 저장된 값 : %d\n", ptr_a); // a변수 주소가 나옴. 실행할 때마다 다름
	printf("ptr_a의 주소 : %d\n", *ptr_a); // 선언할 때의 *와 다름
	// 선언할 때 * : 컴퓨터에게 포인터라고 알려주는 역할
	// 출력할 때 * : ptr_a라는 변수 자체를 사용하고 싶을 때
	//               a == *ptr_a (포인터를 쓰는 목적에 의해)

	// a의 값 : 20
	// a의 주소 : 19922476
	// ptr_a에 저장된 값 : 19922476
	// ptr_a의 주소 : 20

}

