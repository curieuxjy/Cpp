// typedef
// type define : 형을 정의

#include <stdio.h>

int main() {
	// unsigned short int : 16비트(2바이트)짜리 부호가 없는 정수로 저장하는 자료형
	unsigned short int age; 
	// 이름이 너무 김 -> 짧은 이름으로 재정의


	typedef int Int32; // Int32라는 별명을 지어줌
	int n = 20; 
	Int32 m = 30;

	printf("%d\n", n);
	printf("%d\n", m);
	printf("%d\n", sizeof(m));
	printf("%d\n", sizeof(Int32));
}