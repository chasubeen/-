#include<stdio.h>

struct teacher {
	char name[11];
	char adress[30];
	char tel[11];
	char lesson[20];
	long birth;
};
void main() {
	int i;
	struct teacher tear[3];
	for (i = 0; i < 3; i++) {
		printf("name:");
		scanf("%s", tear[i].name);
		printf("adress:");
		scanf("%s", tear[i].adress);
		printf("tel:");
		scanf("%s", tear[i].tel);
		printf("lesson:");
		scanf("%s", tear[i].lesson);
		printf("birth:");
		scanf("%ld", &tear[i].birth);
	}
	for (i = 0; i < 3; i++) {
		printf("�̸�:%s\n�ּ�:%s\n����ó:%s\n", tear[i].name, tear[i].adress, tear[i].tel);
		printf("����:%s\n�������:%ld\n", tear[i].lesson, tear[i].birth);
	}
}