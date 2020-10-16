// 구조체 가리키기 = 구조체 포인터

#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main() {
	// = 없이 선언 가능
	ProductInfo myProduct{ 456820, "제주 샤인머스캣", 30000 };

	ProductInfo* ptr_product = &myProduct;

	// *ptr_product.num == *(ptr_product.num)
	// ()로 표시해야 함
	printf("product number : %d\n", (*ptr_product).num);
	printf("product name   : %s\n", (*ptr_product).name);
	printf("product price  : %d\n", (*ptr_product).cost);

	// (*a).b == a->b
	printf("product number : %d\n", ptr_product->num);
	printf("product name   : %s\n", ptr_product->name);
	printf("product price  : %d\n", ptr_product->cost);
}