/*
문제
두 개의 음이 아닌 정수를 입력받아 큰 수의 제곱에서 작은 수의 제곱을 뺀 결과값을
출력하는 프로그램을 작성하시오.
(두 정수를 전달받아 제곱의 차를 리턴하는 함수를 이용할 것)
입력 예
8 10
출력 예
36
*/

#include<stdio.h>

void func1(a, b) {
	if (a >= b) {
		printf("%d\n", (a*a) - (b*b));
	}
	else {
		printf("%d\n", (b*b) - (a*a));
	}
	return 0;
}

void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	func1(a, b);
}