#include<stdio.h>

void main() {
	int a;

	printf("���� �Է�:");
	scanf("%d", &a);
	
	if (a % 2 == 0) {    // ���� ����� 1���� ���� {}�� ����ǥ�ø� ���� �ʾƵ� �ȴ�.
		printf("%d�� ¦���Դϴ�.\n", a);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.\n",a);
	}
}