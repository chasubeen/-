/* �� ��, �� ���� 1���� ���� ��ġ�ϴ� ������ ��������� �����ϱ� */
#include<stdio.h>

int flag[8]; // �� �࿡ ���� ��ġ�ߴ��� üũ�ϴ� �迭
int pos[8]; // �� ������ ���� ��ġ

/* �� ������ ���� ��ġ�� ��� */
void print(void) {
	int i;
	for (i = 0; i < 8; i++)
		printf("%2d", pos[i]);
	putchar('\n');
}

// i������ �˸��� ��ġ�� ���� ��ġ
void set(int i) {
	int j;
	for (j = 0; j < 8; j++) {
		if (!flag[j]) { // j�࿡ ���� ��ġ���� �ʾҴٸ� 
			pos[i] = j;
			if (i == 7) // ��� ���� ��ġ�� �Ϸ�
				print();
			else {
				flag[j] = 1; // ���� ��ġ�� �� flag������ 1 �迭
				set(i + 1);
				flag[j] = 0;

			}
		}
	}
}

void main() {
	int i;
	for (i = 0; i < 8; i++)
		flag[i] = 0;
	set(0);
}

