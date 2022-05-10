/*
문제
10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
입력 예
10 20 25 66 83 7 22 90 1 100
출력 예
odd : 141
even : 283
*/

#include<stdio.h>

void main() {
	int a[10];
	int i;
	int odd=0, even=0;
	for (i = 0; i < 10; i++) {
		scanf(" %d", &a[i]);
		if (i % 2 != 0) {
			even += a[i];
		}
		else {
			odd += a[i];
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}