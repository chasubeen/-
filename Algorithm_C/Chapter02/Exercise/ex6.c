#include<stdio.h>

// ������ 2���� ~ 36���� ����� ��ȯ
void main() {
	int i;
	unsigned no; // ��ȯ�ϴ� ����
	int cd; // ���
	int dno; // ��ȯ �� �ڸ���

	char cno[512]; // ��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
	int retry; // �� �� ��?
	puts("10������ ��� ��ȯ�մϴ�.");
	do {
		printf("��ȯ�ϴ� ���� �ƴ� ����: ");
		scanf("%d", &no);
		do {
			printf("� ������ ��ȯ�ұ��?(2-36)");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_convr(no, cd, cno);
		printf("%d�����δ�", cd);
		for (i = dno - 1; i >= 0; i--) // ���ڸ����� ���Ƿ� ���
			printf("%c", cno[i]);
		printf("�Դϴ�.\n");
		printf("�� �� �� �ұ��?(1 ... ��/0 ... �ƴϿ� : ");
		scanf("%d", &retry);
	} while (retry == 1);
}

/*--- type ���� x�� y�� ���� ��ȯ ---*/
#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

// ���� �� x�� n������ ��ȯ�Ͽ� �迭 d�� ���κк��� ����
int card_convr(unsigned x, int n, char d[]) {
	int i;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; // ��ȯ �� �ڸ���

	if (x == 0) // ���� ���ڰ� 0�̿��ٸ� 
		d[digits++] = dchar[0]; // ��ȯ �Ŀ��� 0�̴�.
	else
		while (x) { // x�� 0�� �Ǳ� ������
			d[digits++] = dchar[x % n]; // n���� ���� �������� ����
			x /= n; // x �����ϱ�
		}

	/* d[0] ~ d[digits -1]�� ���� �������� ���� */
	for (i = 0; i < digits / 2; i++)
		swap(char, d[i], d[digits - i - 1]);

	return digits;
}