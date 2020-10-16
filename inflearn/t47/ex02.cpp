#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in, * out; // 스트림
	// 파일을 가리키는 포인터
	int n;

	in = fopen("intput.txt", "r"); // 없는 파일을 가리킬 때

	printf("in = %d\n", in); // 포인터의 값은 0 == NULL

	//------------error------------
	if (in != nullptr) {
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
}