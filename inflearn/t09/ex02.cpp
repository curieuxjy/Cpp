/*
2. 체중과 키를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.
*/
#include <stdio.h>
int main() {
	float weight, height;
	float bmi;

	printf("체중(kg)을 입력해주세요.\n");
	scanf_s("%f", &weight);
	printf("키(cm)를 입력해주세요.\n");
	scanf_s("%f", &height);
	bmi = weight / (height * height * 0.0001);

	printf("당신의 BMI 지수는 %f 입니다.\n", bmi);
}