#include <iostream>

using namespace std;

int n; // global var
void set() {
	n = 10; 
}
namespace jungyeon {
	int n;
	void set() {
		n = 20; // �Ҽ��� ������ �ʾƵ� �� ���ӽ����̽� �ȿ� ����
	}
}
namespace google {
	int n;
	void set() {
		n = 30;
	}
}

int main() {
	::set();
	jungyeon::set();
	google::set();

	cout << ::n << endl;
	cout << jungyeon::n << endl;
	cout << google::n << endl;
}