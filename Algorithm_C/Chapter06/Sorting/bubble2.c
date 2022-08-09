/* ���� ����(����2: ��ȯ Ƚ���� ���� ���� �۾��� �����.) */
#include<stdio.h>
#include<stdlib.h>
#define swap(type,x,y) do{type t = x;x = y;y = t;}while(0)

// ���� ����
void bubble(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int exchg = 0;
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				exchg++;
			}
		if (exchg == 0) break;
	}
}

void main() {
	int i, nx;
	int* x; // �迭�� ù ��° ��ҿ� ���� ������ 

	puts("���� ����");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); // ����� ������ nx�� int�� �迭 ����

	for (i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx); // �迭 x�� ���� ����

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);
}