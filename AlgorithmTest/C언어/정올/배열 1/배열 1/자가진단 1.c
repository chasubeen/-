/*
����
���� 10���� ������ �� �ִ� �迭�� ����� 10���� ���ڸ� �Է¹޾� �Է¹��� ���ڸ� �̾ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
A B C D E F G H I J
��� ��
ABCDEFGHIJ
Hint!
���ڸ� �Է¹��� ���� %c �տ� �ݵ�� ������ �ʿ����� ���� ����.
*/

#include<stdio.h>

void main() {
	int i;
	char text[10];
	for (i = 0; i < 10; i++) {
		scanf(" %c", &text[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("%c", text[i]);
	}
	printf("\n");
}