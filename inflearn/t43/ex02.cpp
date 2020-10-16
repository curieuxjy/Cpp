// 2. 빈칸에 들어갈 코드는?

#include <stdio.h>

struct Point {
	int x, y;
};

void pointSwap(Point* p) {
	// x좌표와 y좌표를 교환
	int tmp = p->x;
	p->x = p->y;
	p->y = tmp;
}

int main() {
	Point pos = { 3, 4 };

	pointSwap(&pos);

	printf("(%d, %d)\n", pos.x, pos.y);
}