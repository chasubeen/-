/*
����
1~12������ ������ �Է¹޾� ����� ��� �Է¹��� ���� �Է¹޾� ����� ��� �ش� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
2
��� ��
28
Hint!
����� ��� 1������ 12������ �ϼ��� ���� 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31���̴�.
*/

#include<stdio.h>

void main() {
	int a;
	scanf("%d", &a);

	switch (a) {
	case 2:
		printf("28\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30\n");
		break;
	default:
		printf("31\n");
		break;
	}
}