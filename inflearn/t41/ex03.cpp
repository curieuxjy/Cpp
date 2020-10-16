// ��ǰ �ٲٱ�

#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

// swap
void productSwap(ProductInfo* a, ProductInfo* b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	// = ���� ���� ����
	ProductInfo myProduct{ 456820, "���� ���θӽ�Ĺ", 30000 };
	ProductInfo otherProduct{ 222222, "���� �м��ĸ���", 12000 };

	productSwap(&myProduct, &otherProduct);

	printf("product number : %d\n", myProduct.num);
	printf("product name   : %s\n", myProduct.name);
	printf("product price  : %d\n", myProduct.cost);
}