/*
����
�ڿ��� n�� �Է¹޾Ƽ� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


�Է� ��
3
��� ��
*****
 ***
  *
*/

#include<stdio.h>

void main() {
	int n,i,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) { //�� ����
		for (j = 1; j <= i; j++) { //�� ����
			printf(" ");
		}
		for (j = 1; j <= (n - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}