//4. 문자열을 매개변수로 받아 그 문자열에서 공백을 제거하여 출력하는 함수

#include <stdio.h>

// C++에서는 const char로
void print_noSpace(const char str[]) { // *str도 가능
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