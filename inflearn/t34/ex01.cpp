// prototype : 원형, 시제품
// 함수의 위치가 자유로워 짐
// 함수끼리 호출이 자유로움
// 어떤 함수가 있는지 한눈에 파악 가능
#include <stdio.h>

// 걷기
// 선언(함수 이름, 형, 매개변수만 적고 기능 구현은 안함)
void walk(int distance);

// 돌기
// 변수 이름까지 생략 가능
void rotate(int); //int angle

// 사각형 그리기
void drawSquare();

int main() {
	// 호출
	drawSquare();
}

// 걷기
// 정의(함수의 기능을 구현)
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}

// 돌기
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}

// 사각형 그리기
void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}