// �޸� ��������
#include <stdio.h>

struct Point { int x, y; };
// �޸𸮿��� �ƹ��ϵ� �Ͼ�� ����

int main() {
	
	Point p;
	/*
	�޸𸮻� 4����Ʈ�� ������ 2�� ����
	_________________
	|  p.x  |  p.y  |   = p : 8byte
	-----------------
	  4byte   4byte

	*/ 

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}