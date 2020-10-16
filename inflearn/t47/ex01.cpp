#include <stdio.h>
#include <cstdio>

int main() {
	FILE *in, *out; // 스트림
	// 파일을 가리키는 포인터
	int n;

	in = fopen("input.txt", "r"); // read
	out = fopen("output.txt", "w");

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);

}