/*
4.
10 * 10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램

입력 예
3 4
4 2 6 3 
7 9 3 4
5 1 2 1

출력 예
15
23
9
*/
#include <stdio.h>

int main() {
	int arr[12][12];
	int row;
	int col;

	scanf_s("%d%d\n", &row, &col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

	// 합 구하기
	for (int i = 0; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}