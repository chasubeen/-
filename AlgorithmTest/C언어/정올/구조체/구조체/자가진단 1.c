/*
����
"�̸�", "�б���", "�г�"�� �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(�̸��� �б����� ���� 20�� �����̴�.)

�Է� ��
Songjunhyuk Beolmal 6
��� ��
Name : Songjunhyuk
School : Beolmal
Grade : 6
*/

#include<stdio.h>

struct Student {
	char name[20];
	char school[20];
	int grade;
};

void main() {
	struct Student per1; //����ü ���� ����
		scanf("%s %s %d",per1.name,per1.school,&per1.grade);
		printf("Name : %s\n", per1.name);
		printf("School : %s\n", per1.school);
		printf("Grade : %d\n", per1.grade);
}