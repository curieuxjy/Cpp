// ���ڿ� ó��
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	str = "Hello";
	
	// ���� ���� ����
	cout << str << endl;

	string name;

	cout << "�̸� �Է� : ";
	cin >> name;

	// ���ڿ� ���̱� ����
	string msg = "�ȳ��ϼ���, " + name + " ��.";
	cout << msg << endl;
}