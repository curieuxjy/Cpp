#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in, * out; // ��Ʈ��
	// ������ ����Ű�� ������
	int n;

	in = fopen("intput.txt", "r"); // ���� ������ ����ų ��

	printf("in = %d\n", in); // �������� ���� 0 == NULL

	//------------error------------
	if (in != nullptr) {
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
}