#include <stdio.h>

struct ProductInfo {
	int num; // 4B
	const char name[100]; // 100B
	int cost; // 4B
};

int main() {
	ProductInfo myProduct = { 4797283, "���� ���θӽ���", 29900 };

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��     �� : %d��\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct));

	// �޸𸮻� �ּ� �˾ƺ���
	printf("��ǰ��ȣ �ּ� : %d\n", &myProduct.num);
	printf("��ǰ�̸� �ּ� : %d\n", myProduct.name);
	printf("��    �� �ּ� : %d\n", &myProduct.cost);

	printf("myProduct�ּ� : %d\n", &myProduct);
}