/*
����
������ ������� �Է¹޾� ������ ���� �Լ��� ȣ���Ͽ�
4Ģ����(+ - * /)�� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
('/'�� ���� ���� �κи� ����ϰ� 4Ģ���� �̿��� ���� ����� 0���� �Ѵ�.)
( if_else ������ �ۼ��ϼ���.)

�Է� ��
10 + 20
��� ��
10 + 20 = 30
*/
#include <stdio.h>

void compute(int a, int b, char com)
{
	if (com == '+')
		printf("%d + %d = %d\n", a, b, a + b);
	else if (com == '-')
		printf("%d - %d = %d\n", a, b, a - b);
	else if (com == '*')
		printf("%d * %d = %d\n", a, b, a*b);
	else if (com == '/')
		printf("%d / %d = %d\n", a, b, a / b);
	else
		printf("%d %c %d = %d\n", a, com, b, 0);
}

int main()
{
	int a, b;
	char com;
	scanf("%d %c %d", &a, &com, &b);
	compute(a, b, com);
}