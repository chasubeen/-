/*
����
100�� ������ ���ڷ� ������ �� ���� ���ڿ��� �Է¹޾Ƽ� 
�� ���ڿ��� ���� 'c'�� ���ڿ� "ab"�� ���Կ��θ� "Yes", "No"�� �����Ͽ� ��¿�ó�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
abdef
��� ��
No Yes
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	scanf("%s", a);
	if (strstr(a, "c")) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	printf(" ");

	if (strstr(a, "ab")) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	printf("\n");
}