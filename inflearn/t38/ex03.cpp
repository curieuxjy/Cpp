// �迭�̳� �����Ϳ��� ������ ������ �� ���� 2
#include <stdio.h>

int main() {

	typedef const char* String;
	String name = "Jungyeon";
	// == const char* name = "Jungyeon";

	printf("Name: %s\n", name);
}

// const char* name = "Jungyeon";
// char�� �����Ϳ� ���ڿ��� ���� �� ����

// typedef Ư���� �ڷ����� �ǹ̸� �־��� �� ����