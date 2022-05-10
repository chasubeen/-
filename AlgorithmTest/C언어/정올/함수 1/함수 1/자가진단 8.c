/*
문제
10 이하의 두 개의 양의 정수를 입력받아서 
작은 수부터 큰 수까지의 구구단을 차례대로 출력하는 프로그램을 구조화하여 작성하시오.
입력 예
3 5
출력 예
== 3dan ==
3 * 1 =  3
3 * 2 =  6
3 * 3 =  9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27

== 4dan ==
4 * 1 =  4
4 * 2 =  8
4 * 3 = 12
…
5 * 8 = 40
5 * 9 = 45
*/

#include<stdio.h>

void gugudan(int a, int b) {
	int i, j;
	if (a > b) {
		for (i = b; i <= a; i++) {
			printf("== %ddan ==\n", i);
			for (j = 1; j <= 9; j++) {
				printf("%d * %d = %2d\n", i, j, i*j);
			}
			printf("\n");
		}
	}
	else if (a < b) {
		for (i = a; i <= b; i++) {
			printf("== %ddan ==\n", i);
			for (j = 1; j <= 9; j++) {
				printf("%d * %d = %2d\n", i, j, i*j);
			}
			printf("\n");
		}
	}
}

int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	gugudan(num1, num2);
	return 0;
}