#include<stdio.h>

void main() {
	int sign;
	printf("��ȣ�� ���α׷�\n");
	printf("��ȣ�� �Է��ϼ���(������:1,�Ķ���:2)\n");
	scanf("%d", &sign);

	switch (sign) {
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("���\n");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		break;

	}
}