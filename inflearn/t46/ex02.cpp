// shift �ű��
// << >>
#include <stdio.h>

int main() {
	// char -128~127
	char a = 22; // 00010110

	printf("%d\n", a << 1);
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);

}

/*
44
176
1408 �ڵ����� �� ū �ڷ������� ��ȯ
11
2
0
*/