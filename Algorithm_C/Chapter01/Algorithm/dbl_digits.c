#include<stdio.h>

/* 2�ڸ��� ���(10 ~ 99) �Է��ϱ� */
void main() {
	int n0;
	printf("2�ڸ� ������ �Է��ϼ���.\n");
	do {
		printf("����: ");
		scanf("%d", &n0);
	} while (n0 < 10 || n0 > 99);
	printf("���� n0 ���� %d�� �Ǿ����ϴ�.\n", n0);

	return 0;
}