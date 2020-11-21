//namespace 안에 namespace 넣기
#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {

	void set();
	namespace google {
		void set();
		int n;
	}
	int n;
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
}
void ::doodle::set() {
	n = 20;
}

void doodle::google::set() {
	n = 30;
}
// 식별자 검색