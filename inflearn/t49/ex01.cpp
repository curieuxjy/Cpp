#include <iostream>

namespace a
{
	int n;
}

namespace b
{
	int n;
}

int main() {
	a::n = 10;
	b::n = 20;

	std::cout << "Hello, World!" << 10 << 'a' << std::endl;
}

/*
namespace : std
<< : ����� �����͸� �и��ϴ� ����
endl : end line �ٹٲ� == '\n'
*/