/*
����
10 ������ ���� n�� �Է¹��� �� n���� �̸�(������ 20�� ����)�� �� ������ ������ �Է¹޾� ������ ���� ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
3
Chung 50 65 89
Nolbu 100 38 99
Hungbu 85 95 77
��� ��
Hungbu 85 95 77 257
Nolbu 100 38 99 237
Chung 50 65 89 204
Hint!
�̸��� 3������ ���� �̿ܿ� �������� �����ϴ� ����ü�� �����ϸ� ���ϴ�.
*/

#include<stdio.h>

typedef struct Score {
	char name[20];
	int a, b, c;
	int sum;
}score;

void main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	score p[10];
	for(i=0;i<n;i++){
		scanf("%s %d %d %d", p[i].name, &p[i].a, &p[i].b, &p[i].c);
		p[i].sum = p[i].a + p[i].b + p[i].c;
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (p[i].sum < p[j].sum) {
				score tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s %d %d %d %d\n", p[i].name, p[i].a, p[i].b, p[i].c, p[i].sum);
	}
}