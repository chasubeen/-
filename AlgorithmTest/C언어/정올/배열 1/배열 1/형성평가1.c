/*
����
10���� ���ڸ� �Է¹޾� ���������� �Է¹��� ���ں��� ù ��° �Է¹��� ���ڱ��� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
A E C X Y Z c b z e
��� ��
e z b c Z Y X C E A
*/

#include<stdio.h>

void main() {
	int arr[10];
	int i;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &arr[i]);
	}
	for (i = 9; i >= 0; i--) {
		printf("%c ", arr[i]);
	}
	printf("\n");
}