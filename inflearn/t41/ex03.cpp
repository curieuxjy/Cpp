// 상품 바꾸기

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
	// = 없이 선언 가능
	ProductInfo myProduct{ 456820, "제주 샤인머스캣", 30000 };
	ProductInfo otherProduct{ 222222, "서울 패션후르츠", 12000 };

	productSwap(&myProduct, &otherProduct);

	printf("product number : %d\n", myProduct.num);
	printf("product name   : %s\n", myProduct.name);
	printf("product price  : %d\n", myProduct.cost);
}