/* ���� ���� ���α׷� */
#include<stdio.h>
#include<stdlib.h>

/* --- ���� ���� �Լ�(�迭�� ��ڰ��� 0 �̻� max ����) --- */
void fsort(int a[], int n, int max) {
	int i;
	int* f = calloc(max + 1, sizeof(int)); // ���� ���� 
	int* b = calloc(n, sizeof(int)); // �۾��� ���� �迭

	for (i = 0; i <= max; i++) f[i] = 0; // �迭 f�� ��� ����� ���� 0���� �ʱ�ȭ
	for (i = 0; i < n; i++) f[a[i]]++; // ��������ǥ �����
	for (i = 1; i <= max; i++) f[i] += f[i - 1]; // ������������ǥ �����
	for (i = n - 1; i >= 0; i--) b[--f[a[i]]] = a[i]; // ���� �迭 �����
	for (i = 0; i < n; i++) a[i] = b[i]; // �迭 �����ϱ�

	free(b);
	free(f); 
}

void main() {
	int i, nx;
	int* x;
	const int max = 100; // ���� ū ��
	puts("���� ����");
	printf("��� ����: ");

	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("0 ~ %d�� ������ �Է��ϼ���.\n", max);

	for (i = 0; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf("%d", &x[i]);
		} while (x[i] < 0 || x[i] > max);
	}

	fsort(x, nx, max); // �迭 x�� ���� ����
	puts("������������ �����߽��ϴ�.");

	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); // �迭�� ����
}