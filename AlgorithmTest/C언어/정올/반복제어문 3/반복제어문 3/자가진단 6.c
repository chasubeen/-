/*
����
�ڿ��� n( 3 <= n <= 10) �� �Է¹޾� ������ ���� �����ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
3
��� ��
ABC
DE
F
*/

#include<stdio.h>

void main() {
	int n, i, j;
	char tmp = 'A';
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("%c", tmp++); //���ĺ��� ���������� �������� +1 ��Ű�� �ȴ�.
		}
		printf("\n");
	}
}