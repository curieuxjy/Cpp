// ���۷��� ����
#include <iostream>

using namespace std;

//���۷��� ������ �Ű�����
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a(5), b(8);
	// int& p = a;
	// p = 10;

	// cout << p << endl;
	// cout << a << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

