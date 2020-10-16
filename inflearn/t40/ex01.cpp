#include <stdio.h>

struct ProductInfo {
	int num; // 4B
	const char name[100]; // 100B
	int cost; // 4B
};

int main() {
	ProductInfo myProduct = { 4797283, "제주 샤인머스켓", 29900 };

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d원\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct));

	// 메모리상 주소 알아보기
	printf("상품번호 주소 : %d\n", &myProduct.num);
	printf("상품이름 주소 : %d\n", myProduct.name);
	printf("가    격 주소 : %d\n", &myProduct.cost);

	printf("myProduct주소 : %d\n", &myProduct);
}