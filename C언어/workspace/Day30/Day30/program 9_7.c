#include<stdio.h>
#include<string.h> //���ڿ� ����ϱ� ���ؼ�
#include<stdlib.h> // ���� �Ҵ� �ޱ� ���ؼ�

struct Person {
	char name[20];
	int age;
	char adress[100];
};

void main() {
	struct Person *pptr1 = (struct Person*)malloc(sizeof(struct Person)); //����ü �����Ϳ� ����ü ���� 1���� ���� �Ҵ���
	strcpy(pptr1->name, "�ֹ���"); //strcpy: ���ڿ� ���� -> pptr1�� name�� ����
	pptr1->age = 25;
	strcpy(pptr1->adress, "����� ������ ���ﵿ");

	printf("�̸�:%s\n", pptr1->name);
	printf("����:%d\n", pptr1->age);
	printf("�ּ�:%s\n", pptr1->adress);

	free(pptr1);

	return 0;
}