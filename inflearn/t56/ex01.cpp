// ������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { //������
		cout << "Generator!" << endl;
		// default�δ� �ƹ� ���� ���� ������
	}

	~MyClass() { //�Ҹ���
		cout << "Destructor!" << endl;
	}
};

// MyClass globalObj;
// main�� ����Ǳ� �� �����ǰ� main�� ���� �� �Ҹ�

// local object�� ������ �Ҹ� �׽�Ʈ�ϱ� ���� �Լ�
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