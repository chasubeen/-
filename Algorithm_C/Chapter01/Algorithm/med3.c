#include<stdio.h>

/* �� ������ ���� �Է��ϰ� �߾Ӱ� ���ϱ� */

int med3(int, int, int);

void main() {
	int a, b, c;

	printf("�� ������ �߾Ӱ��� ���մϴ�.\n");
	printf("a�� ��: "); scanf("%d", &a);
	printf("b�� ��: "); scanf("%d", &b);
	printf("c�� ��: "); scanf("%d", &c);

	printf("�߾Ӱ��� %d�Դϴ�.\n", med3(a, b, c));

	return 0;
}

/*--- a,b,c�� �߾Ӱ� ���ϱ� --- */
int med3(int a, int b, int c) {
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

