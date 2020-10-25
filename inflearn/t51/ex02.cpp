//over load: ���� ����
#include <iostream>

//�� swap�̶�� �� �� ����
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void swap(int* (&a), int* (&b)) {
	int* tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 20, b = 30;
	double da = 2.22, db = 3.33;
	int* pa = &a, * pb = &b;

	swap(a, b);
	swap(da, db); // �ڷ����� ���缭 �����Ϸ��� �˾Ƽ� �ν�
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;




}