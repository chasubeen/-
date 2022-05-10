/*
문제
5개의 정수를 입력받아 각 정수의 절대값의 합을 출력하는 프로그램을 작성하시오.
입력 예
35 -20 10 0 55
출력 예
120
*/

#include<stdio.h>
#include<math.h>

int abs_sum() {
	int a, sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		sum += abs(a);
	}
	return sum;
}

int main(void) {
	printf("%d\n", abs_sum());
	return 0;
}

