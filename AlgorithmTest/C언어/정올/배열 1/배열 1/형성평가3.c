/*
����
10���� ������ �Է¹޾� Ȧ�� ��° �Է¹��� ������ �հ� ¦�� ��° �Է¹��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
10 20 25 66 83 7 22 90 1 100
��� ��
odd : 141
even : 283
*/

#include<stdio.h>

void main() {
	int a[10];
	int i;
	int odd=0, even=0;
	for (i = 0; i < 10; i++) {
		scanf(" %d", &a[i]);
		if (i % 2 != 0) {
			even += a[i];
		}
		else {
			odd += a[i];
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}