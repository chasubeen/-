#include<stdio.h>

// �Լ��� ����(main ��!)
void sum() {
	int x, y;
	printf("ù ���� ��:");
	scanf("%d", &x);
	printf("�� ��° ��:");
	scanf("%d", &y);
	printf("�� ���� ��:%d\n", x + y);
}

//�Լ� ȣ��(main ��!)
void f1(int x) { //x�� �Լ��� ȣǮ�ο��� ���� ���޹޾� ������ �Ű�����
	printf("%d\n", x); //�Ű��������� ������ ���� ���
}

void main() {
	f1(30);

	return 0;
}