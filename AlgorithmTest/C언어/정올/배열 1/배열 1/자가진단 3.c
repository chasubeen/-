/*
����
10���� ���ڸ� �Է¹޾Ƽ� ù ��° �� ��° �ϰ� ��° �Է¹��� ���ڸ� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
A B C D E F G H I J
��� ��
A D G
*/

#include<stdio.h>

void main() {
	char a[10];
	int i;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	printf("%c %c %c\n", a[0],a[3],a[6]);
}