// sscanf_s / sprintf_s 
// ���ڿ��κ��� �Է°� ���

#include <stdio.h>

int main() {
	char str1[] = "450";
	int n;

	sscanf_s(str1, "%d", &n); 
	// str1�� %d �������� �޾Ƽ� n�� ����
	printf("n : %d\n", n);

	//-----------------------------------

	int m = 450;
	char str2[100];

	sprintf_s(str2, "%d", m); 
	// m�� ���� %d �������� str2�� ��
	printf("%s\n", str2);
}