/*
문제
자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.
입력 예
3
출력 예
***
 **
  *
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (j = 1; j <= n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}