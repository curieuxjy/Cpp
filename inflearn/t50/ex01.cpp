// ���� �ٷ��
#include <iostream>

using namespace std;

int main() {
	int a(10); // == int a = 10; �ʱ�ȭ

	int b(a);
	a = 5; // ����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}