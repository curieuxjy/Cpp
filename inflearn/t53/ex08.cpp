#include <iostream>

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
		int n;
		void set() {
			n = 30;
		}
	}
}

int main() {
	using namespace std;
	using namespace doodle;

	::set();
	// set();; // 어떤 set을 가리키는지 알 수 없음
	doodle::set();
	google::set(); // doodle:: 생략가능

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
}