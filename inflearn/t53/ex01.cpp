#include <iostream>

using namespace std;

int n; // global var
void set() {
	::n = 10; // ¸í½ÃÀû global var
}
namespace jungyeon {
	int n;
	void set() {
		jungyeon::n = 20;
	}
}
namespace google {
	int n;
	void set() {
		google::n = 30;
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