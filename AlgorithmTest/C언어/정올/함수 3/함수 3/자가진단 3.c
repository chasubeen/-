/*
문제
100 이하의 자연수 N을 입력받아 재귀함수를 이용하여 1부터 N까지의 합을 구하는 프로그램을 작성하시오.
입력 예
100
출력 예
5050
*/

#include<stdio.h>

int add(int n) {
	if (n == 1) {
		return n;
	}
	else {
		return n + add(n - 1);
	}
}
int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", add(N));
	return 0;
}