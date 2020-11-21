#include <iostream>

using namespace std;

int n; // global var
void set();

namespace jungyeon {
	int n;
	void set();
}

namespace google {
	int n;
	void set();
}

int main() {
	::set();
	jungyeon::set();
	google::set();

	cout << ::n << endl;
	cout << jungyeon::n << endl;
	cout << google::n << endl;
}

void ::set() {
	n = 10;
}

void jungyeon::set() {
	n = 20;
}

void google::set() {
	n = 30;
}