// char: 1바이트 정수형
// (int 4바이트)
// character: 문자(반각문자 Halfwidth ABCabc123_+\;)
// Fullwidth: 한글, 한자, 일본어...
#include <stdio.h>

int main() {
	char a = 65;
	printf("%c\n", a); // A
	printf("%d\n", 'A'); // 65
}

//ASCII: American Standard (문자-숫자)
