/*
����
5�� �л��� ���� ���� ���� ���� 4������ ������ �Է� �޾Ƽ� 
�� ���κ��� ����� 80 �̻��̸顰�հݡ� �׷��� �����顰���հݡ��� ����ϰ� �հ��� ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76
��� ��
fail
fail
pass
pass
fail
Successful : 2
*/

#include<stdio.h>

void main() {
	int score[5][4];
	int sum[5] = {0};
	int tmp = 0;
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			sum[i] += score[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
			if (sum[i] >= 320) {
				printf("pass\n");
				tmp++;
			}
			else {
				printf("fail\n");
			}
		}
		printf("Successful : %d", tmp);
	}