// this ������
#include <iostream>

using namespace std;

class MyClass {
public:
	// ��ü �ȿ� �Լ��� ���Ե��� ����
	void PrintThis() {
	// void PrintThis(MyClass *ptr) {
		cout << "My address is " << this << endl;
		// this�� ������ �ʴ� �Ű�������
	}
};

int main() {
	MyClass a, b;

	cout << "The address of a is " << &a << endl;
	cout << "The address of b is " << &b << endl;

	a.PrintThis();
	// a.PrintThis(&a);
	b.PrintThis();
	// b.PrintThis(&b);
}