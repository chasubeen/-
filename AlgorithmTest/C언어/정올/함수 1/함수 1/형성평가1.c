/*
����
��@�����ڸ� 10�� ����ϴ� �Լ��� �ۼ� �� �� �Լ��� �� �� ȣ���Ͽ� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��� ��
first
@@@@@@@@@@
second
@@@@@@@@@@
third
@@@@@@@@@@
*/

#include<stdio.h>

char printer() {
	printf("@@@@@@@@@@");
	return 0;
}

void main() {
	printf("first\n");
	printer();
	printf("\n");
	printf("second\n");
	printer();
	printf("\n");
	printf("third\n");
	printer();
	printf("\n");
}
