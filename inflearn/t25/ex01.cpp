#include <stdio.h>

int main() {
	int a = 10;
	int* ptr_a;
	ptr_a = &a;
	// int* ptr_a = &a; �� ����

	// int* ptr_a = &a; -> �������� ptr_a�� a�� �ּҰ��� �ְڴ�
	// *ptr_a = 20; ������ ptr_a�� ����Ű�� ������ 20�� �ְڴ�

	printf("ptr_a�� �� : %d\n", ptr_a);
	printf("ptr_a + 1�� �� : %d\n", ptr_a + 1);

	// int -> 4byte
	// "�����Ϳ� ���ϴ� �� * �ڷ��� ũ��" ũ�� ��ŭ ����
}