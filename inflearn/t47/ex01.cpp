#include <stdio.h>
#include <cstdio>

int main() {
	FILE *in, *out; // ��Ʈ��
	// ������ ����Ű�� ������
	int n;

	in = fopen("input.txt", "r"); // read
	out = fopen("output.txt", "w");

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);

}