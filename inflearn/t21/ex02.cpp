// �ִ� �ּ� ���ϱ�
#include <stdio.h>

int main() {
	int n;
	int arr[100];

	printf("���� �迭�� ũ�⸦ ���ּ���.\n");
	scanf_s("%d", &n); // & ����
	printf("�迭 �ȿ� �� ���ڵ��� ���ּ���.\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]); // & ����
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