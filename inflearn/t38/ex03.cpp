// 배열이나 포인터에도 별명을 지어줄 수 있음 2
#include <stdio.h>

int main() {

	typedef const char* String;
	String name = "Jungyeon";
	// == const char* name = "Jungyeon";

	printf("Name: %s\n", name);
}

// const char* name = "Jungyeon";
// char형 포인터에 문자열을 넣을 수 있음

// typedef 특별한 자료형에 의미를 넣어줄 수 있음