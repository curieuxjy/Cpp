// �迭�̳� �����Ϳ��� ������ ������ �� ����
#include <stdio.h>

int main() {
	typedef int Pair[2]; // 2��¥�� int�� �迭�� ����
	Pair point = { 3, 4 }; 
	//int point[2] = { 3, 4 };

	printf("(%d, %d)\n", point[0], point[1]);
}