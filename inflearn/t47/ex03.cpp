#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in = fopen("ex03.cpp", "r");
	char ch;
	/* ù��° ���
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
feof : ������ ������ ������ True ��ȯ
       end of file
*/