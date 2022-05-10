/*
문제
9자리 이하의 자연수를 입력받아 재귀함수를 이용하여 각 자리 숫자의 제곱의 합을 출력하는 프로그램을 작성하시오.
( main()함수에 변수 하나, 재귀함수에 매개변수 하나만을 사용할 수 있다.)
입력 예
12345
출력 예
55
Hint!
끝자리(1의 자리)에 있는 숫자와 마지막 자리를 뺀 수의 각자리의 제곱을 더하면 된다. (n%10 + n/10의 각자리의 합)
*/

#include<stdio.h>

int square(int n) {
	int tmp;
	if (n < 10) {
		return n*n;
	}
	return ((n%10) *(n%10)) + square(n / 10);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", square(n));
	return 0;
}