//over load: 다중 정의
#include <iostream>

//swap이 이미 namespace std에 저장되어 있음
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swapd(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void swapp(int* (&a), int* (&b)) {
	int* tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 20, b = 30;
	double da = 2.22, db = 3.33;
	int* pa = &a, * pb = &b;

	swap(a, b);
	swapd(da, db);
	swapp(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;




}