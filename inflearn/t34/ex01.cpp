// prototype : ����, ����ǰ
// �Լ��� ��ġ�� �����ο� ��
// �Լ����� ȣ���� �����ο�
// � �Լ��� �ִ��� �Ѵ��� �ľ� ����
#include <stdio.h>

// �ȱ�
// ����(�Լ� �̸�, ��, �Ű������� ���� ��� ������ ����)
void walk(int distance);

// ����
// ���� �̸����� ���� ����
void rotate(int); //int angle

// �簢�� �׸���
void drawSquare();

int main() {
	// ȣ��
	drawSquare();
}

// �ȱ�
// ����(�Լ��� ����� ����)
void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}

// ����
void rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

// �簢�� �׸���
void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}