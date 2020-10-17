// 문자열 처리
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	str = "Hello";
	
	// 길이 제한 없음
	cout << str << endl;

	string name;

	cout << "이름 입력 : ";
	cin >> name;

	// 문자열 붙이기 쉬움
	string msg = "안녕하세요, " + name + " 님.";
	cout << msg << endl;
}