/*
����
�ڿ��� n�� �Է¹޾Ƽ� n�ٸ�ŭ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
5
��� ��
*
**
***
****
*****
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}