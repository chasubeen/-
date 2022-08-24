// int�� ���� IntStack�� ���
#include<stdio.h>
#include "IntStack.h"

void main() {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("���� ������ �����Ͽ����ϴ�.");
		return -1;
	}

	while (1) {
		int menu, x;
		int idx; // ��ģ �κ�..!
		printf("���� ������ ��: %d / %d\n", Size(&s), Capacity(&s));
		printf("(1) Ǫ�� (2) �� (3) ��ũ (4) ��� (5) �˻�  (6) �ʱ�ȭ (0) ���� : ");
		scanf("%d", &menu);
		if (menu == 0) break;

		switch (menu) {
		case 1: // Push
			printf("������: ");
			scanf("%d", &x);
			if ((Push(&s, x) == -1) | (IsFull(&s)))
				puts("\a����: Ǫ�ÿ� �����Ͽ����ϴ�.");
			break;
		case 2: // Pop
			if ((Pop(&s, &x) == -1) | (IsEmpty(&s)))
				puts("\a����: �˿� �����Ͽ����ϴ�.");
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3: // Peek
			if (Peek(&s, &x) == -1)
				puts("\a����: ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4: // ���
			Print(&s);
			break;
		case 5:
			printf("�˻��� ������: ");
			scanf("%d", &x);

			/* ������ �κ� */
			if ((idx = Search(&s, x)) == -1)
				puts("\a���� : �˻��� �����߽��ϴ�.");
			else
				printf("�����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);
			break;

		case 6:
			Clear(&s);
			break;

		}
	}
	Terminate(&s);
}