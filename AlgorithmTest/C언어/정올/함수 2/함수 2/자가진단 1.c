/*
����
10 ������ �ڿ��� n�� �Է¹ް� n���� ������ �Է¹޾� 
������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�迭�� �����ϴ� �Լ��� �̿��Ѵ�.)
�Է� ��
4
10 9 2 15
��� ��
15 10 9 2
*/

#include<stdio.h>
void sort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void main() {
	int n;
	scanf("%d", &n);
	int i;
	int a[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}