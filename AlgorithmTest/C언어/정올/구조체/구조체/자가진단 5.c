/*
����
5���� �̸��� Ű�� �Է¹޾� Ű�� ���� ���� ����� �̸��� Ű�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �̸��� 20�� �����̴�.
�Է� ��
Park 175
Lee 180
Choo 185
Son 193
Kim 188
��� ��
Park 175
*/

#include<stdio.h>

typedef struct Student {
	char name[20];
	int height;
}student;

void main() {
	student per[5]; // �Ѹ��Ѹ� ������ ġ�� ���� ���� 5�� ��������!(�ַ�� �� �κ�)

	int i, tmp, num = 0;
	for (i = 0; i < 5; i++) {
			scanf("%s %d", per[i].name, &per[i].height);
	}

	tmp = per[0].height;
	for (i = 1; i < 5; i++) {
		if (tmp > per[i].height) {
			tmp = per[i].height; //tmp������ Ű�� �ּڰ� ����(�ӽú���)
			num = i; //Ű�� �ּڰ��� ���� ������ ��ȣ(�� �� ����� Ű�� ���� ������)
		}
	}
	printf("%s %d\n", per[num].name, per[num].height);
}