/*
����
20 ������ ���� n�� �Է¹ް� n���� ������ �Է¹޾� ���� �������� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
5
35 10 35 100 64
��� ��
100
64
35
35
10
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int a[20];
	int tmp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] < a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
