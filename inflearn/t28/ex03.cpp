#include <stdio.h>

int main() {
	char str[] = "Jungyeon";

	printf("%s\n", str);
	printf("%s\n", &str[0]);
	// 0번째의 주소를 적어주면 null이 나올때까지 출력해줌

	char strings[3][10] = { "Hello", "World", "Jungyeon" };

	for (int i = 0; i < 3; i++) {
		printf("%s\n", strings[i]); // strings[i] == &strings[i][0]
		printf("%s\n", &strings[i]);
	}
}