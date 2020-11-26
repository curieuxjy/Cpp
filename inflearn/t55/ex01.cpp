// this 포인터
#include <iostream>

using namespace std;

class MyClass {
public:
	// 객체 안에 함수가 포함되지 않음
	void PrintThis() {
	// void PrintThis(MyClass *ptr) {
		cout << "My address is " << this << endl;
		// this는 보이지 않는 매개변수다
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