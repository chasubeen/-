/*
����
���ڿ��� �Է¹ް� ������ �Է� �޾Ƽ� ���ڿ��� �� �ں��� ������ŭ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� �Է¹��� ������ ���ڿ��� ���̺��� ũ�ٸ� �� �ں��� �� ó������ ��� ����Ѵ�.
(���ڿ� ���̴� �ִ� 100�� �����̴�. )
�Է� ��
korea 3
��� ��
aer
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	int num;

	scanf("%s", a);
	scanf("%d", &num);

	if (strlen(a) <= num) {
		for (int i = strlen(a) - 1; i >= 0; i--) {
			printf("%c", a[i]);
		}
	}
	else {
		for (int i = strlen(a) - 1; i >= strlen(a) - num; i--) {
			printf("%c", a[i]);
		}
	}
	printf("\n");
}