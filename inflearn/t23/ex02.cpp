// ���ڿ� �Է�
#include <stdio.h>

int main() {
	char s[100];

	scanf_s("%s", s, sizeof(s)); 
	//scanf_s �Լ����� 2���� ���� �ʿ�
	printf("%s\n", s);
}