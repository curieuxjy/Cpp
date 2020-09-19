#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	int i, sum; 
	//sum을 사용하기 위해서 for문 밖에서 선언

	for (i = 1, sum = 0; i <= n; sum += i, i++);
	// sum에 i를 더하는 순서와 i를 증가시키는 순서 주의!
	// 실행할 명령어가 업어서 ;로 막음

	printf("%d\n", sum);
}