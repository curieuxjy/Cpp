#include <stdio.h>

int main() {
	char strings[3][20] = { "of the people", "by the people", "for the people" };
	char* p_str[3];

	// ������ �迭�� �ּҰ� �־��ֱ�
	for (int i = 0; i < 3; i++) {
		p_str[i] = strings[i];
	}

	// 1
	for (int i = 0; i < 3; i++) {
		printf("%s\n", &strings[i][0]);
	}

	// 2
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p_str[i]);
	}

}