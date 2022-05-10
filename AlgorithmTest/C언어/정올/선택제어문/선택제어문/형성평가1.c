/*
문제
두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.
입력 예
50 85
출력 예
35
*/

#include<stdio.h>

void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("%d\n", a - b);
	}
	else {
		printf("%d\n", b - a);
	}
}