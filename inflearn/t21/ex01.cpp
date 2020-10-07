// 입력받은 숫자들을 거꾸로 출력
#include <stdio.h>

int main() {
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 입력 : ");
	scanf_s("%d", &n);
	printf("배열 안에 들어갈 숫자들을 써주세요.\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}