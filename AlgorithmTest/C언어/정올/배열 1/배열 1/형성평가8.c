/*
����
100 �� ������ ������ �Է¹޴ٰ� 0 �� �ԷµǸ� �� ������ �Էµ� ���� �� 5�� ����� ������ �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� �Ҽ��� ���� 1�ڸ����� ����Ѵ�.
�Է� ��
35 10 23 100 64 51 5 0
��� ��
Multiples of 5 : 4
sum : 150
avg : 37.5
*/

#include<stdio.h>

void main() {
	int a[100];
	int mul = 0, sum = 0;
	for (int i = 0; i < 100; i++) {
		scanf(" %d", &a[i]);
		if (a[i] % 5 == 0) {
			mul++;
			sum += a[i];
		}
		if (a[i] == 0) {
			mul--;
			break;
		}
	}
	printf("Multiples of 5 : %d\n", mul);
	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", (float)sum / mul);
}