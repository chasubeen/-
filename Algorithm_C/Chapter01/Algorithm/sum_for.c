#include<stdio.h>

/* --- 1,2, ... , n�� �� ���ϱ� ---*/

void main() {
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�.");
	printf("n ��: ");
	scanf("%d", &n);
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}