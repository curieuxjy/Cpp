// 3. code���� pointSwap �Լ��� Point ����ü �ȿ� �ֱ�

#include <stdio.h>;

struct Point {
	int x, y;

	void pointSwap() {
		// x��ǥ�� y��ǥ�� ��ȯ
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