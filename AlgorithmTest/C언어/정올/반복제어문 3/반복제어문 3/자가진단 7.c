/*
����
�ڿ��� n�� �Է¹޾Ƽ� n���� �ٿ� n+1���� ���� Ȥ�� ���ڷ� ä���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
3
��� ��
1 2 3 A
4 5 B C
6 D E F
*/

#include<stdio.h>

void main() {
	int n, i, j;
	int tmp1 = 1;
	char tmp2 = 'A';
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("%d ", tmp1++);
		}
		for (j = 1; j <= i + 1; j++) { //���� �̹� �ڵ尡 �ִ� ��� �� ���� �ڸ����� ��µ�
			printf("%c ", tmp2++);
		}
		printf("\n");
	}
}