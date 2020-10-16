// ����ü ����Ű�� = ����ü ������

#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main() {
	// = ���� ���� ����
	ProductInfo myProduct{ 456820, "���� ���θӽ�Ĺ", 30000 };

	ProductInfo* ptr_product = &myProduct;

	// *ptr_product.num == *(ptr_product.num)
	// ()�� ǥ���ؾ� ��
	printf("product number : %d\n", (*ptr_product).num);
	printf("product name   : %s\n", (*ptr_product).name);
	printf("product price  : %d\n", (*ptr_product).cost);

	// (*a).b == a->b
	printf("product number : %d\n", ptr_product->num);
	printf("product name   : %s\n", ptr_product->name);
	printf("product price  : %d\n", ptr_product->cost);
}