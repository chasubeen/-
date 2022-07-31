#include<stdio.h>
#include<stdlib.h>

// �迭 ��Ҹ� �������� �����ϱ�

// type�� x�� y ���� ��ȯ
#define swap(type,x,y) do{type t = x;x = y;y = t;}while(0)

// ��� ������ n�� �迭 a�� ��Ҹ� �������� ����
void ary_reverse(int a[], int n) {
	int i;
	for (i = 0; i < n / 2; i++)
		swap(int, a[i], a[n - i - 1]);
}

void main() {
	int i;
	int* x;
	int nx;

	printf("����� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	ary_reverse(x, nx);
	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);
	free(x);

	return 0;
}
