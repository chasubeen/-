/*
����
10 ������ �ڿ��� n�� �Է¹ް� n���� ������ �Է¹޾� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�迭�� �����ϴ� �Լ��� �̿��Ѵ�.)
�Է� ��
4
10 9 2 15
��� ��
15 10 9 2
*/
#include<stdio.h>

void sort(int a[],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	int a[100];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}