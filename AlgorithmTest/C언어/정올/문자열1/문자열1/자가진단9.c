/*
����
���ڿ��� �Է� �޾Ƽ� ���ڼ���ŭ ���������� �� ���� ȸ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���ڿ��� ���̴� 100�����̴�.
�Է� ��
PROGRAM
��� ��
MPROGRA
AMPROGR
RAMPROG
GRAMPRO
OGRAMPR
ROGRAMP
PROGRAM
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	int i, j;
	char c;

	scanf("%s", a);
	for (i = 0; i < strlen(a); i++) {
		c = a[strlen(a) - 1]; //ó���������� ����
		for (j = strlen(a) - 1; j >= 0; j--) {
			a[j] = a[j - 1];
		}
		a[0] = c;
		printf("%s\n", a);
	}
}