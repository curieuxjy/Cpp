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
<< : 출력할 데이터를 분리하는 역할
endl : end line 줄바꿈 == '\n'
*/