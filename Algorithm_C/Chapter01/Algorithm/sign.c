#include<stdio.h>

/* �Է¹��� ���� ���� ��ȣ(���/����/0)�� �Ǵ� */
void main() {
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	if (n > 0)
		printf("�� ���� ����Դϴ�.\n");
	else if (n < 0)
		printf("�� ���� �����Դϴ�.\n");
	else
		printf("�� ���� 0�Դϴ�.\n");

	return 0;
}