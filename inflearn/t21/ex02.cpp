// 최대 최소 구하기
#include <stdio.h>

int main() {
	int n;
	int arr[100];

	printf("만들 배열의 크기를 써주세요.\n");
	scanf_s("%d", &n); // & 주의
	printf("배열 안에 들어갈 숫자들을 써주세요.\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]); // & 주의
	}

	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}

	printf("max : %d\n", max);

	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) min = arr[i];
	}

	printf("min : %d\n", min);
}