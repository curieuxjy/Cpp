// gets / puts : ���ڿ��� �޴´� / ����Ѵ�
//               stream

#include <stdio.h>

int main() {
	char str[100];

	gets_s(str);
	puts(str);
}

/*
scanf_s("%s", ...)�� ������ �� �� ������ �ƴ϶� ������ �������� ��
scanf_S("%s", str); ���� Hello, World!�� �ԷµǾ��ٸ�
str�� "Hello,"�� ��!
*/