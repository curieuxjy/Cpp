// 배열이나 포인터에도 별명을 지어줄 수 있음
#include <stdio.h>

int main() {
	typedef int Pair[2]; // 2개짜리 int형 배열을 선언
	Pair point = { 3, 4 }; 
	//int point[2] = { 3, 4 };

	printf("(%d, %d)\n", point[0], point[1]);
}