// �迭�� �Ű������� �ѱ��
// call-by-value : ����
// call-by-reference : ����
#include <stdio.h>

void printArr(int arr[4]) {
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // ����
	}
}

int main() {
	// local var�� �迭
	int arr[4] = { 1, 2, 3, 4 };

	printArr(arr);
	// call-by-?
	// ���� �����ǹǷ�!
	// call-by-reference

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

/*
[ ���� ]

void printArr(int arr[4]) { // arr[4] == *arr
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // ����
	}
}
________________________________________________

printArr(arr);���� arr == &arr[0]
________________________________________________

�迭�� ������ ���� ��,
-----------------------------
|1(236)|2(240)|3(244)|4(248)|
-----------------------------
printArr(arr) == printArr(&arr[0])
-> void printArr(int arr[4]) == void printArr(int *arr)
-> void printArr(int 236)
-> arr[i] == *(arr+i) == *(236+0) == 236������ �ִ� �� == 2
-> 2 *= 2
���� call-by-reference �Լ���

*/