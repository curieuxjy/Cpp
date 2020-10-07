// strcpy_s : copy
// strcat_s : concatenate
// strcmp : compare

#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Jungyeon";
	char str2[100];

	strcpy_s(str2, str1); // strcpy_s�� �ؾ� ��

	printf("str2�� �� : %s\n", str2);

	char str[100] = "Hello ";
	strcat_s(str, "Jungyeon"); // strcat_s�� �ؾ� ��
	// ��� �����̱� ����

	printf("%s\n", str);

	char str3[] = "Hello";
	char str4[] = "Hollo";

	int cmp = strcmp(str3, str4);
	// -1 : str3�� str4���� ��
	// 0 : str3 == str4
	// 1 : str3�� str4���� ��
	printf("%d\n", cmp);

}