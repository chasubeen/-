/*
����
���� n�� �Է¹޾� n���� ������ �����迭�� �����ϰ� n���� ������ �Է¹޾� �ִ밪�� �ּҰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
5
15 90 8 36 25
��� ��
max : 90
min : 8
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int *p = (int*)malloc(sizeof(int)*n);
	int max=-9999,min=9999;
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		if (p[i] > max) {
			max = p[i];
		}
		if (p[i] < min) {
			min = p[i];
		}
	}
	printf("max : %d\n", max);
	printf("min : %d\n", min);
}