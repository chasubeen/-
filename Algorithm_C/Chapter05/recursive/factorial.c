/* ���������� ����� ��������� ���ϱ� */
#include<stdio.h>

/* ���� n�� �������� �� ��ȯ */
int factorial(int n) {
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

void main() {
	int x;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);
	printf("%d�� �������� ���� %d�Դϴ�.\n", x, factorial(x));
}