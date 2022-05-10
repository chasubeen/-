/*
문제
자연수 n( 3 <= n <= 10) 을 입력받아 다음과 같이 영문자를 출력하는 프로그램을 작성하시오.
입력 예
3
출력 예
ABC
DE
F
*/

#include<stdio.h>

void main() {
	int n, i, j;
	char tmp = 'A';
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("%c", tmp++); //알파벳도 순차적으로 뽑으려면 +1 시키면 된다.
		}
		printf("\n");
	}
}