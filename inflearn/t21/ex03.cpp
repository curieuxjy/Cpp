// ¦���� ���� ���ϱ�
#include <stdio.h>

int main() {
	int n;
	int arr[100];

	printf("���� �迭�� ũ�⸦ ���ּ���.\n");
	scanf_s("%d", &n);
	printf("�迭 �ȿ� �� ���ڵ��� ���ּ���.\n");
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