// 3. code에서 pointSwap 함수를 Point 구조체 안에 넣기

#include <stdio.h>;

struct Point {
	int x, y;

	void pointSwap() {
		// x좌표와 y좌표를 교환
		int tmp = x;
		x = y;
		y = tmp;
	}
};

int main() {
	Point pos = { 3, 4 };

	pos.pointSwap();

	printf("(%d, %d)\n", pos.x, pos.y);
}