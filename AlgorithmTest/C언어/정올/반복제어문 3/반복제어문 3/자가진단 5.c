/*
문제
자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.


입력 예
3
출력 예
*****
 ***
  *
*/

#include<stdio.h>

void main() {
	int n,i,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) { //행 개수
		for (j = 1; j <= i; j++) { //열 개수
			printf(" ");
		}
		for (j = 1; j <= (n - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}