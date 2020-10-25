/*
3. 다음과 같은 함수 정의에서 컴파일 오류가 나는 이유 찾기


void drawRectangle(int l, int r, int t, int b) {

}

void drawRectangle(int x = 0, int y = 0, int w, int h) {

}
*/

void drawRectangle(int l, int r, int t, int b) {

}

void drawRectangle(int w, int h, int x = 0, int y = 0) {
	// default 뒤로
}

int main() {
	drawRectangle(0, 0, 0, 0); // 어떤 함수를 불렀는지 알 수 없음
}