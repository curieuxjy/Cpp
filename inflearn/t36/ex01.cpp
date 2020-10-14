// 배열을 매개변수로 넘기기
// call-by-value : 값만
// call-by-reference : 참조
#include <stdio.h>

void printArr(int arr[4]) {
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // 변형
	}
}

int main() {
	// local var인 배열
	int arr[4] = { 1, 2, 3, 4 };

	printArr(arr);
	// call-by-?
	// 값이 변형되므로!
	// call-by-reference

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

/*
[ 설명 ]

void printArr(int arr[4]) { // arr[4] == *arr
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // 변형
	}
}
________________________________________________

printArr(arr);에서 arr == &arr[0]
________________________________________________

배열이 다음과 같을 때,
-----------------------------
|1(236)|2(240)|3(244)|4(248)|
-----------------------------
printArr(arr) == printArr(&arr[0])
-> void printArr(int arr[4]) == void printArr(int *arr)
-> void printArr(int 236)
-> arr[i] == *(arr+i) == *(236+0) == 236번지에 있는 값 == 2
-> 2 *= 2
따라서 call-by-reference 함수다

*/