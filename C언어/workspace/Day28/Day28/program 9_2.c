#include<stdio.h>
//�������� �Ż������� ����ü ����
// �ʵ�: �̸�,�ּ�, ��ȭ��ȣ, ���ǰ���, ���� 
struct teacher {
	char name[11];
	char adress[30];
	char tel[11];
	char lesson[20];
	long birth; // long: 8byte�� ������
};

void main() {
	struct teacher tear; //������ ����(tear) ����
	printf("sizeof(struct teacher):%d\n", sizeof(struct teacher));
	printf("sizeof(tear):%d\n", sizeof(tear));
	printf("%p\n", &tear);
	printf("long:%d", sizeof(long));
}