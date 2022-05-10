/*
문제
자연수 n을 입력받아서 n개의 줄에 n+1개의 숫자 혹은 문자로 채워서 다음과 같이 출력하는 프로그램을 작성하시오.
입력 예
3
출력 예
1 2 3 A
4 5 B C
6 D E F
*/

#include<stdio.h>

void main() {
	int n, i, j;
	int tmp1 = 1;
	char tmp2 = 'A';
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("%d ", tmp1++);
		}
		for (j = 1; j <= i + 1; j++) { //옆에 이미 코드가 있는 경우 그 다음 자리부터 출력됨
			printf("%c ", tmp2++);
		}
		printf("\n");
	}
}