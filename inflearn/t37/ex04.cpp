//4. ���ڿ��� �Ű������� �޾� �� ���ڿ����� ������ �����Ͽ� ����ϴ� �Լ�

#include <stdio.h>

// C++������ const char��
void print_noSpace(const char str[]) { // *str�� ����
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
}

int main() {
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Jungyeon.\n");
}