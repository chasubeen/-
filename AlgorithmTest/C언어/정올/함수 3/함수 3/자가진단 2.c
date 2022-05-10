/*
문제
자연수 N을 입력받아 재귀함수를 이용하여 N부터 1까지 차례대로 출력하는 프로그램을 작성하시오.
N은 50이하의 자연수이다.
입력 예
5
출력 예
5 4 3 2 1
*/

#include<stdio.h>


void func(int n) {
	if (n > 0) {
		printf("%d ", n);
		func(n - 1);
	}
	else {
		return;
	}
}
void main() {
	int n;
	scanf("%d", &n);
	func(n);

	return 0;
	printf("\n");
}