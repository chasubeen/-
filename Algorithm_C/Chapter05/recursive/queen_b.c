/* �� ���� 1���� ���� ��ġ�ϴ� ������ ��������� �����ϱ� */

#include<stdio.h>

int pos[8]; // �� �������� ���� ��ġ(��)

// �� ���� ���� ��ġ ���
void print(void) {
	int i;
	for (i = 0; i < 8; i++)
		printf("%2d", pos[i]);
	putchar('\n');
}

// i���� ���� ��ġ
void set(int i) {
	int j;
	for (j = 0; j < 8; j++) {
		pos[i] = j;
		if (i == 7) // ���� ��ġ�� �Ϸ�Ǹ�
			print(); // ���� ��ġ�� ��� ���
		else
			set(i + 1); // ���� ���� �� ��ġ
	}
}

void main() {
	set(0); // 0������ ����
}
 