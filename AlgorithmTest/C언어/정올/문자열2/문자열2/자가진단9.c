/*
����
5���� ���ڿ��� �Է¹޾� ���ڿ� ũ��(�ƽ�Ű�ڵ�) �������� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�־����� ���ڿ��� ���̴� 20�� �̸��̴�.
�Է� ��
Jungol
Korea
information
Monitor
class
��� ��
information
class
Monitor
Korea
Jungol
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[5][20];
	char tmp[20];

	int i, j;
	for (i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (strcmp(a[i], a[j]) < 0) {
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%s\n", a[i]);
	}
}