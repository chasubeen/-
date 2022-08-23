#include<stdio.h>
#include<stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]) {
	int i;
	int j = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == key) {
			idx[j] = i;
			j++;
		}
	}
	return j;
}

void main() {
	int i, nx, ky;
	int no;		// ky�� ��ġ�ϴ� ����� ���� 
	int* x;		// �����͸� �����ϴ� �迭
	int* idx;	// ky�� ��ġ�ϴ� ����� �ε����� �����ϴ� �迭

	puts("���� �˻�");
	printf("����� ���� : ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));	// ����� ������ nx�� int�� �迭�� ����
	idx = (int*)calloc(nx, sizeof(int)); // ����� ������ nx�� int�� �迭�� ����

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻� �� :");
	scanf("%d", &ky);

	no = search_idx(x, nx, ky, idx);	// �迭 x���� ���� ky �� ��Ҹ� ���� �˻� 

	if (no == -1)
		puts("��ġ�ϴ� ��Ҵ� �������� �ʽ��ϴ�.");
	else {
		printf("��ġ�ϴ� ��Ҵ� %d ���Դϴ�.\n", no);
		for (i = 0; i < no; i++)
			printf("x[%d] ", idx[i]);
		putchar('\n');
	}

	free(x);	// �迭�� ���� 
	free(idx);	// �迭�� ����
}
