/*
����
�⵵�� �Է¹޾� ����(leap year)���� ���(common year)���� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
2008
��� ��
leap year
Hint!
400���� ����������� �����̴�. �Ǵ� 4�� ����������� 100���� ����������� ������ �����̴�. �������� ��� ����̴�.
*/
#include<stdio.h>

void main() {
	int a;
	scanf("%d", &a);
	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) {
		printf("leap year\n");
	}
	else {
		printf("common year\n");
	}
}