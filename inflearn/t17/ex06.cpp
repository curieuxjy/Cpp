#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	int i, sum; 
	//sum�� ����ϱ� ���ؼ� for�� �ۿ��� ����

	for (i = 1, sum = 0; i <= n; sum += i, i++);
	// sum�� i�� ���ϴ� ������ i�� ������Ű�� ���� ����!
	// ������ ��ɾ ��� ;�� ����

	printf("%d\n", sum);
}