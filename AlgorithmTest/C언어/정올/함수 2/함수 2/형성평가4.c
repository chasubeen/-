/*
����
���� n�� �Է¹޾� 2^n�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (1 �� n �� 20)
�Է� ��
10
��� ��
1024
*/

#include<stdio.h>

int two_power(int x);

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", two_power(n));
	return 0;
}

int two_power(int x) {
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= 2;
	}
	return result;
}