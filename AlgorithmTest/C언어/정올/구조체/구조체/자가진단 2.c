/*
����
"�б���", "�г�"�� ������ �� �ִ� ����ü�� 2���� ������ ������ ��,
�� ���� ������ �б��� "Jejuelementary", �г⿡ "6"���� ���� �ʱ�ȭ�ϰ�
�ٸ� �������� ���ο� �б��� �г��� �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�б����� 20�� ������ �������̴�.
�Է� ��
Seogwipomiddle  1
��� ��
6 grade in Jejuelementary School //�ʱ�ȭ�� ��
1 grade in Seogwipomiddle School //�Է¹��� ��
*/

#include<stdio.h>

typedef struct Student {
	char school[21];
	int grade;
}student;

void main() {
	student per1 = { "Jejuelementary",6 };
	student per2;

	scanf("%s %d", per2.school, &per2.grade);
	printf("%d grade in %s School\n", per1.grade, per1.school);
	printf("%d grade in %s School\n", per2.grade, per2.school);
}

