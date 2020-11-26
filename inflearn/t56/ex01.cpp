// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { //생성자
		cout << "Generator!" << endl;
		// default로는 아무 내용 없이 생성됨
	}

	~MyClass() { //소멸자
		cout << "Destructor!" << endl;
	}
};

// MyClass globalObj;
// main이 실행되기 전 생성되고 main이 끝난 후 소멸

// local object의 생성과 소멸 테스트하기 위한 함수
void testLocalObj() {
	cout << "test local object start" << endl;
	MyClass localObj;
	cout << "test local object end" << endl;

}

int main() {
	cout << "main start!!" << endl;
	testLocalObj();
	cout << "main end!!" << endl;
}