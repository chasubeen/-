#include<stdio.h>

void main() {
	int number = 0, i;
	for (i = 1; i <= 100; i++) {
		number = number + i; // 1���� 100������ ������ �� ���ϱ�
	}
	printf("1���� 100������ ���� %d�Դϴ�\n", number);
}