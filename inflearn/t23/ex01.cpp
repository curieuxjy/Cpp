// ���ڿ�
#include <stdio.h>

int main() {
	char arr[] = "Hello"; // = {"H", "e", "l", "l", "o"};
	printf("%s\n", arr);

	printf("�迭�� ũ�� : %d\n", sizeof(arr) / sizeof(char));

	// char arr[] = "abc" = { "a", "b", "c", "\0"(null) };
	// ���ڿ��� ����ϰų� �ڿ� ���� ���ڿ��� ���õ� �Լ��� �����Ű��
	// \0�� ���ڿ��� �߰��� ���´� �ϴ��� �� ���ķδ� ó������ ����
}