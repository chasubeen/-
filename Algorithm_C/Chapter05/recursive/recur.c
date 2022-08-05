#include<stdio.h>

/* 재귀 함수 recur*/
void recur(int n) {
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}

void main() {
	int x;
	printf("정수를 입력하세요: ");
	scanf("%d", &x);
	recur(x);
}