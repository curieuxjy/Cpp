#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <cstdio>

int main() {
	FILE *in, *out; // ��Ʈ��
	// ������ ����Ű�� ������
	int n;

	in = fopen("input.txt", "r"); // read
	out = fopen("output.txt", "w"); // write
	// "a" : append

	fscanf(in, "%d", &n); // �Է¹ް�
	printf("%d\n", n); // ������Ʈ���� Ȯ��
	fprintf(out, "%d\n", n); // ����

	// ���� �ݾ��ֱ�
	fclose(in);
	fclose(out);

}