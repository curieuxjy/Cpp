/*
4.
10 * 10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷�

�Է� ��
3 4
4 2 6 3 
7 9 3 4
5 1 2 1

��� ��
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

	// �� ���ϱ�
	for (int i = 0; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}