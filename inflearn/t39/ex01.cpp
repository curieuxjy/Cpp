/*
����ü ����� : �������� ������ ����

typedef int Pair[2];

Pair p; // int p[2];
p[0] = 3;
p[1] = 4;

�ٸ� ������� ������ x, y��ǥ�� �ǹ��Ѵٴ� ���� �˾ƺ��� �����
*/

#include <stdio.h>

int main() {
	// typedef struct { int x, y; } Point;
	// typedef ���� ����!
	struct Point { int x, y; } ;
	// �ַ� ����ü�� ���������� �����ϱ� ������
	// ���� ����ü �����ϴ� ���� main() ������ �����⵵ ��
	
	Point p;

	// struct { int x, y; } p; �� ���� ��

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
}

