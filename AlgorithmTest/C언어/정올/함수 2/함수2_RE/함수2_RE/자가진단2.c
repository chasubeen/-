/*
����
2016���� ��¥�� �� ���� ���� �� �Ϸ� �Է¹޾Ƽ� �Էµ� ��¥�� �����ϸ� "OK!" �׷��� ������ "BAD!"��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
2 30
��� ��
BAD!
*/

#include<stdio.h>
int date(int month,int day) {
	if (month > 12 || day < 1)
		return 0;

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return day <= 31 ? 1 : 0;
	case 4:
	case 6:
	case 9:
	case 11:
		return day <= 30 ? 1 : 0;

	case 2:
		return day <= 29 ? 1 : 0;
	}

}

int main(void) {
	int m, d;
	scanf("%d %d", &m, &d);
	if (date(m,d) == 0)
		printf("BAD!\n");
	else
		printf("OK!\n");
}