#include<stdio.h>

/* ��� �Լ� recur*/
void recur(int n) {
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}

void main() {
	int x;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);
	recur(x);
}