/*
2. ü�߰� Ű�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������.
*/
#include <stdio.h>
int main() {
	float weight, height;
	float bmi;

	printf("ü��(kg)�� �Է����ּ���.\n");
	scanf_s("%f", &weight);
	printf("Ű(cm)�� �Է����ּ���.\n");
	scanf_s("%f", &height);
	bmi = weight / (height * height * 0.0001);

	printf("����� BMI ������ %f �Դϴ�.\n", bmi);
}