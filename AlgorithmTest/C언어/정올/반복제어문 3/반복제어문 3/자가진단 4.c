/*
����
�ڿ��� n�� �Է¹޾Ƽ� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
3
��� ��
***
 **
  *
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (j = 1; j <= n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}