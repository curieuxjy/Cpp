// 연산자: + - / * % += -= ++ -- && || !
// 조건문 if() switch()
// 반복문 while() for()

// 1. 시험점수 입력
// 90점대 A, 80점대 B, 70점대 C, 60점대 D, 50점대 E, 나머지 F

#include <stdio.h>

int main() {
	int score;
	char grade;

	scanf_s("%d", &score);
	if (score > 100 || score < 0) printf("잘못 입력하셨습니다.\n");
	else {
		if (score >= 90) printf("A\n");
		else if (score >= 80) printf("B\n");
		else if (score >= 70) printf("C\n");
		else if (score >= 60) printf("D\n");
		else if (score >= 50) printf("E\n");
		else printf("F\n");
	}

}