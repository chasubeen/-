#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// ī���� �������� ��� ����
void menuPrint();
void order(); //�ֹ�
void cancel(); // ���
void pay(); //����

char *menulist[5]; // ���� �ֹ�����(��� �ֹ��Ͽ��°�!)
int orderIdx = 0; //�ֹ��� Ƚ��(index)�� �ϴ� 0���� ����
int total = 0; // ��ü �ֹ��� -> �ϴ� 0���� ����

//��� ���
void main() {
	int sc; //����� �� ��° �ܰ� �������ΰ�
	while (1) {
		printf("***************Cafe*********************\n");

		if (orderIdx > 0) {
			printf("���� �ֹ� ����: ");
			for (int i = 0; i < orderIdx; i++) {
				printf("%s ", menulist[i]);
			}
			printf("\n���� �����ݾ�: %d��\n", total);
		}

		printf("1. �ֹ��ϱ�\n");
		printf("2. ����ϱ�\n");
		printf("3. �����ϱ�\n");
		printf("4. ������\n");
		printf("�Է�:");
		scanf("%d", &sc);
		if (sc == 1) { order(); }
		else if (sc == 2) { cancel(); }
		else if (sc == 3) { pay(); }
		else if (sc == 4) {
			printf("���α׷��� �����մϴ�\n");
			break;
		}
		else {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
		}
	}
}
// �޴� ���
void menuPrint() {
	printf("1.Americano\n");
	printf("2.Espresso\n");
	printf("3.CafeLatte\n");

	return 0;
}

// �ֹ��ϱ�
void order() {
	int sc; //�ֹ��� �޴���ȣ �Էº���
	char *orderMenu = { "" };
	orderMenu = (char*)malloc(sizeof(char) * 20);
	int price = 0;
	menuPrint();
	printf("�ֹ��� �޴���ȣ�� �Է��ϼ���: ");
	scanf("%d", &sc);
	switch (sc) {
	case 1:
		orderMenu = "Americano";
		price = 3800;
		break;
	case 2:
		orderMenu = "Espresso";
		price = 2800;
		break;
	case 3:
		orderMenu = "Cafelatte";
		price = 4300;
		break;
	}
	menulist[orderIdx++] = orderMenu;
	total += price;
}

//����ϱ�
void cancel() {
	int delIdx; //������ �޴� ��ȣ �Էº���
	int price;
	if (orderIdx > 0) {
		printf("���� �ֹ� ����\n");
		for (int i = 0; i < orderIdx; i++) {
			printf("%d.%s\n", i + 1, menulist[i]);
		}
		printf("������ �޴� ��ȣ:\n");
		scanf("%d", &delIdx);
		char *deleteMenu = menulist[delIdx - 1];
		printf("delete menu:%s\n", deleteMenu);

		if (strcmp(deleteMenu, "Americano") == 0) {
			price = 3800;
		}
		else if (strcmp(deleteMenu, "Espresso") == 0) {
			price = 2800;
		}
		else if (strcmp(deleteMenu, "CafeLatte") == 0) {
			price = 4300;
		}

		total = price;
		for (int i = delIdx; i < 5; i++) {
			menulist[i - 1] = menulist[i];
		}
		orderIdx -= 1;
	}
}

// �����ϱ�
void pay() {
	int money;
	printf("��ü �ݾ�:%d\n", total);
	printf("������ �ݾ�:");
	scanf("%d", &money);
	if (total <= money) {
		printf("�����Ϸ�! �ܵ��� %d��\n", money - total);
		total = 0;
		for (int i = 0; i < orderIdx; i++) {
			menulist[i] = "";
		}
		orderIdx = 0;
	}
	else {
		printf("�ݾ��� �����մϴ�\n");
	}
}
