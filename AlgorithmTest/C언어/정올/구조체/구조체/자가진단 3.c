/*
����
�� ���� �̸��� ����, ���� ������ �Է¹޾� ���� ������ ����� ���Ͽ� ����ϴ� ���α׷��� �ۼ��� ���ÿ�.
(�̸��� 20�� �����̰� ����� �Ҽ��� ���ϴ� �����Ѵ�.)
�Է� ��
Junho 88 100
Seonbin 95 96
��� ��
Junho 88 100
Seonbin 95 96
avg 91 98
*/

#include<stdio.h>

typedef struct Student {
	char name[20];
	int kor;
	int eng;
}student;

void main() {
	student per1;
	student per2;
	scanf("%s %d %d", per1.name, &per1.kor, &per1.eng);
	scanf("%s %d %d", per2.name, &per2.kor, &per2.eng);
	printf("%s %d %d\n", per1.name, per1.kor, per1.eng);
	printf("%s %d %d\n", per2.name, per2.kor, per2.eng);
	printf("avg %d %d\n",(per1.kor+per2.kor)/2,(per1.eng+per2.eng)/2);
}