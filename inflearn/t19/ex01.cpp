// ������: + - / * % += -= ++ -- && || !
// ���ǹ� if() switch()
// �ݺ��� while() for()

// 1. �������� �Է�
// 90���� A, 80���� B, 70���� C, 60���� D, 50���� E, ������ F

#include <stdio.h>

int main() {
	int score;
	char grade;

	scanf_s("%d", &score);
	if (score > 100 || score < 0) printf("�߸� �Է��ϼ̽��ϴ�.\n");
	else {
		if (score >= 90) printf("A\n");
		else if (score >= 80) printf("B\n");
		else if (score >= 70) printf("C\n");
		else if (score >= 60) printf("D\n");
		else if (score >= 50) printf("E\n");
		else printf("F\n");
	}

}