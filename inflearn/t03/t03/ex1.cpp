#include <stdio.h>

int main() {
	printf("%d + %d = %d\n", 2, 3, 5);
	// %d: 정수 출력

	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592);
	// %f: 실수 출력(자동 소수점 6자리까지)
	// %.2f: 소수점 2자리까지만(반올림)

	printf("%g\n", 3.141592);
	printf("%.3g\n", 872398456.15468648);
	// %g: 실수 출력(지수 형태로도 출력)
	// 유효숫자 지정 
	// default 소수점 6자리

	printf("%c %c %c\n", 'a', 'b', 'c');
	// %c: 문자 출력
	// 작은 따옴표(알파벳, 숫자, 몇몇 기호, \n)
	// 'a' = 97
	// 한글, 한자, 유니코드 문자는 안됨

	printf("%s\n", "안녕하세요");
	// %s: 문자열 출력
	// 큰 따옴표
	// 한글 가능

}