// typedef
// type define : ���� ����

#include <stdio.h>

int main() {
	// unsigned short int : 16��Ʈ(2����Ʈ)¥�� ��ȣ�� ���� ������ �����ϴ� �ڷ���
	unsigned short int age; 
	// �̸��� �ʹ� �� -> ª�� �̸����� ������


	typedef int Int32; // Int32��� ������ ������
	int n = 20; 
	Int32 m = 30;

	printf("%d\n", n);
	printf("%d\n", m);
	printf("%d\n", sizeof(m));
	printf("%d\n", sizeof(Int32));
}