//namespace 안에 namespace 넣기
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
			n = 30; // 한층 위에 있는 doodle의 n을 바꿈
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