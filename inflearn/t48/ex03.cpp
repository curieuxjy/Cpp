// sscanf_s / sprintf_s 
// 문자열로부터 입력과 출력

#include <stdio.h>

int main() {
	char str1[] = "450";
	int n;

	sscanf_s(str1, "%d", &n); 
	// str1을 %d 형식으로 받아서 n에 저장
	printf("n : %d\n", n);

	//-----------------------------------

	int m = 450;
	char str2[100];

	sprintf_s(str2, "%d", m); 
	// m의 값이 %d 형식으로 str2에 들어감
	printf("%s\n", str2);
}