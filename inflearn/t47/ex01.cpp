#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <cstdio>

int main() {
	FILE *in, *out; // 스트림
	// 파일을 가리키는 포인터
	int n;

	in = fopen("input.txt", "r"); // read
	out = fopen("output.txt", "w"); // write
	// "a" : append

	fscanf(in, "%d", &n); // 입력받고
	printf("%d\n", n); // 프롬프트에서 확인
	fprintf(out, "%d\n", n); // 쓰고

	// 파일 닫아주기
	fclose(in);
	fclose(out);

}