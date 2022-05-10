/*
문제
정수 n을 입력받아 2^n의 값을 출력하는 프로그램을 작성하시오. (1 ≤ n ≤ 20)
입력 예
10
출력 예
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