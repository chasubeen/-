/*
����
������ �Է¹޾� 0 �̸� "zero" ����̸� "plus" �����̸� "minus" ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
0
��� ��
zero
*/

#include<stdio.h>

void main() {
	int a;
	scanf("%d", &a);
	if (a == 0) {
		printf("zero\n");
	}
	else if (a > 0) {
		printf("plus\n");
	}
	else {
		printf("minus\n");
	}
}