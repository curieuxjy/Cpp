// ���ڿ� �Է�
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "Hello";
	// sizeof(str) / sizeof(char) - 1(null)

	int len;

	len = strlen(str);
	printf("���ڿ��� ���̴� %d\n", len);
}