/*
����
�ڿ����� �Է¹޾� �Ʒ��� ���� �簢���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�־����� ���� 100������ �ڿ����̴�.
(�Լ��� �ۼ��Ͻÿ�.)
�Է� ��
3
��� ��
1 2 3
2 4 6
3 6 9
*/

#include<stdio.h>

int square(a) {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("%d ", i*j);
		}
		printf("\n");
	}
}

void main() {
	int a;
	scanf("%d", &a);
	square(a);
}