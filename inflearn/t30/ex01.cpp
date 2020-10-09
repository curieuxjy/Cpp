// 1. 코드 읽고 해석해보기
#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr); // 2차원 배열 전체를 가리킴
	printf("%d\n", arr); // ==&arr[0] 1행을 가리킴
	printf("%d\n", *arr); // arr의 첫번째 값 -> 배열의 첫번째 원소를 가리킴

	printf("%d\n", &arr[0]); // 2번 째와 동일
	printf("%d\n", arr[0]); // 1행의 첫번째 원소를 가리킴
	printf("%d\n", *arr[0]); // 3번 째 해석 + *(값 출력)

	printf("%d\n", &arr[0][0]); // (arr[0][0] == arr의 첫번째 원소)의 주소

	printf("%d\n", arr[0][0]); // (arr[0][0] == arr의 첫번째 원소)의 값 자체

	// &_____[0]에다 넣어보기
	// 가리킴 == 주소
}