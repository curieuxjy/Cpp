#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in = fopen("ex03.cpp", "r");
	char ch;
	/* 첫번째 방법
	while (!feof(in)) {
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}
	*/
	while (fscanf(in, "%c", &ch) != EOF) {
		printf("%c", ch);
	}
	fclose(in);
}

/*
feof : 파일을 끝까지 읽으면 True 반환
       end of file
*/