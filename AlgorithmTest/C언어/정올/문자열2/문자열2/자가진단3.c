/*
����
20�� ������ ���ڷ� �̷���� 10���� �ܾ�� �� ���� ���ڸ� �Է¹޾Ƽ� 
���������� �Է¹��� ���ڷ� ������ �ܾ ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
champion
tel
pencil
olympiad
class
information
jungol
lesson
book
lion
l
��� ��
tel
pencil
jungol
Hint!
������ ������ ��ġ�� �˱� ���ؼ��� ���� �ܾ��� ���̸� �˾ƾ� �Ѵ�. ������ ���ڴ� �� ����-1�� ��ġ�� �ִ�.
*/

#include<stdio.h>

void main() {
	char a[10][20];
	for (int i = 0; i < 10; i++) {
		scanf("%s", a[i]);
	}
	char b;
	scanf(" %c", &b);

	for (int i = 0; i < 10; i++) {
		if (a[i][strlen(a[i]) - 1] == b) {
			printf("%s\n", a[i]);
		}
	}
}