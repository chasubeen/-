/*
����
���� N�� �Է¹ް� �ٽ� N���� ������ �Է¹޾� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(1 �� N �� 15, �Է°� ���, ������ ��� �Լ��� �̿��� ��)
�Է� ��
5
12 35 1 48 9
��� ��
48 35 12 9 1
*/
#include<stdio.h>
int arrange() {
	int a[16];
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i; j < n; j++) {
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	arrange();
}