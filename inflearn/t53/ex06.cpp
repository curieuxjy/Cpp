//namespace �ȿ� namespace �ֱ�
#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set() {
		n = 20;
	}
	namespace google {

		void set() {
			n = 30; // ���� ���� �ִ� doodle�� n�� �ٲ�
		}
		int n;
	}
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
}