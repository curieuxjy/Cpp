// char: 1����Ʈ ������
// (int 4����Ʈ)
// character: ����(�ݰ����� Halfwidth ABCabc123_+\;)
// Fullwidth: �ѱ�, ����, �Ϻ���...
#include <stdio.h>

int main() {
	char a = 65;
	printf("%c\n", a); // A
	printf("%d\n", 'A'); // 65
}

//ASCII: American Standard (����-����)
