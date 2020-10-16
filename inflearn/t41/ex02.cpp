// �������ִ� �Լ� �����

#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

void productSale1(ProductInfo p, int percent) {
	p.cost -= p.cost * percent / 100;
}

void productSale2(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;
}

int main() {
	// = ���� ���� ����
	ProductInfo myProduct{ 456820, "���� ���θӽ�Ĺ", 30000 };

	// call-by-value
	productSale1(myProduct, 10);

	printf("product number : %d\n", myProduct.num);
	printf("product name   : %s\n", myProduct.name);
	printf("product price  : %d\n", myProduct.cost);

	// call-by-reference
	productSale2(&myProduct, 10);
	
	printf("product number : %d\n", myProduct.num);
	printf("product name   : %s\n", myProduct.name);
	printf("product price  : %d\n", myProduct.cost);
}