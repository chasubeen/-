/*
����
2016��(2�� 29�� ������) �� ��¥�� �� ���� ���� �� �Ϸ� �Է¹޾Ƽ� �Էµ� ��¥�� �����ϸ� "OK!" 
�׷��� ������ "BAD!"��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
2 30
��� ��
BAD!
*/

#include<stdio.h>

int m, d;
int check() {
	if (d < 1 || m> 12) {
		return 0;
	}
	switch (m) {
	// 1�޿� 31�ϱ��� �ִ� ���
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return d <= 31 ? 1: 0;
	// 1�޿� 30�ϱ��� �ִ� ��� 
	case 4:
	case 6:
	case 9:
	case 11:
		return d <= 30 ? 1 : 0;
	case 2:
		return d <= 29 ? 1 : 0;
	}
}
void main() {
	scanf("%d %d", &m, &d);
	if (check(m,d) == 0) {
		printf("BAD!\n");
	}
	else {
		printf("OK!\n");
	}
}