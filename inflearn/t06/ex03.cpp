// ����ȯ: �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�
#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;

	printf("%f\n", avg); // 93.666667?
	// ��� 93.000000
	// sol1) int sum -> double sum
	// sol2) double avg = (double)sum /3; ���������� double �ڷ����� ��
}

// ���� / ���� = ����
// �Ǽ� / ���� = �Ǽ�
// �Ǽ� / �Ǽ� = �Ǽ�

// ���� + ���� = ����
// ���� + �Ǽ� = �Ǽ�
// �Ǽ� + �Ǽ� = �Ǽ�
// +,*,% ��� �����ϰ� ����