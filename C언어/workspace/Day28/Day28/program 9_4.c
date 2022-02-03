#include<stdio.h>
struct teacher {
	char name[11];
	char adress[30];
	char tel[11];
	char lesson[20];
	long birth; // long: 8byte의 정수값
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

	printf("이름:%s\n주소:%s\n연락처:%s\n",tear.name,tear.adress,tear.tel);
	printf("담당과목:%s\n생년월일:%d\n", tear.lesson, tear.birth);
}