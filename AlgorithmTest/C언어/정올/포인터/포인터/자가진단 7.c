/*
����
�迭�� ũ�⸦ �Է¹޾� �Է¹��� ũ�⸸ŭ �迭�� ������ �Է¹ް� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
4
15 23 100 38
��� ��
100 38 23 15
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
	int n;
	scanf("%d", &n);
	int *a;
	// ���� �޸� �Ҵ� -> ������ �迭 ����!
	a = (int *)malloc(sizeof(int)*n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
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
	free(a);
	return 0;
}