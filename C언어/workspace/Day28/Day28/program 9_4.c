#include<stdio.h>
struct teacher {
	char name[11];
	char adress[30];
	char tel[11];
	char lesson[20];
	long birth; // long: 8byte�� ������
};

void main() {
	struct teacher tear;
	printf("name:");
	scanf("%s", tear.name);
	printf("adress:");
	scanf("%s", tear.adress);
	printf("tel:");
	scanf("%s", tear.tel);
	printf("lesson:");
	scanf("%s", tear.lesson);
	printf("birth:");
	scanf("%d", &tear.birth);

	printf("�̸�:%s\n�ּ�:%s\n����ó:%s\n",tear.name,tear.adress,tear.tel);
	printf("������:%s\n�������:%d\n", tear.lesson, tear.birth);
}