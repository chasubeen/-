/*
����
���ڿ��� �Է¹޾� ���ĺ� ���ڸ� ��� �빮�ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���ڿ��� ���̴� 100�����̴�.
�Է� ��
1988-Seoul-Olympic!!!
��� ��
SEOULOLYMPIC
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	int i;
	scanf("%s", &a);
	for (i = 0; i < strlen(a); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			printf("%c", a[i]);
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			printf("%c", a[i] - 32);
		}
	}
	printf("\n");
}