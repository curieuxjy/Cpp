// 형변환: 자료형을 다른 자료형으로 바꾸는 작업
#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;

	printf("%f\n", avg); // 93.666667?
	// 결과 93.000000
	// sol1) int sum -> double sum
	// sol2) double avg = (double)sum /3; 순간적으로 double 자료형이 됨
}

// 정수 / 정수 = 정수
// 실수 / 정수 = 실수
// 실수 / 실수 = 실수

// 정수 + 정수 = 정수
// 정수 + 실수 = 실수
// 실수 + 실수 = 실수
// +,*,% 모두 동일하게 적용