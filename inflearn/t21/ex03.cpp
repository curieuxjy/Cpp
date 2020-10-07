// 짝수의 개수 구하기
#include <stdio.h>

int main() {
	int n;
	int arr[100];

	printf("만들 배열의 크기를 써주세요.\n");
	scanf_s("%d", &n);
	printf("배열 안에 들어갈 숫자들을 써주세요.\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}