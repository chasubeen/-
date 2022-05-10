/*
문제
첫 번째는 1, 두 번째는 2, 세 번째부터는 앞의 두 수의 곱을 100으로 나눈 나머지로 이루어진 수열이 있다.
100 이하의 자연수 N을 입력받아 재귀함수를 이용하여 N번째 값을 출력하는 프로그램을 작성하시오.

입력 예
8

출력 예
92

Hint!
1 2 2 4 8 32 56 92 ...
*/

#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", func(n));
}

int func(int n) {
	if (n == 1 || n == 2) {
		return n;
	}
	else {
		return (func(n - 1) * func(n - 2)) % 100;
	}
}

// time limit Exceed
// 포인터를 이용해 해결할 수는 있다.(일단은 포인터 안쓰는 방향으로 가자면 이게 최선이다.)

/* 포인터를 활용하는 방법

#include <stdio.h>

void print(int num, int *p); // 함수의 선언

int main() {
	int num, arr[100] ={0,}; // 재귀함수 연산의 결과값을 담을 크기가 100인 배열 생성
	scanf("%d",&num);
	print(num,&arr);

	return 0;
}

void print(int num, int *p) {
	int i;
	p[0] = 1; // 수열의 첫 번째 값 = 1
	p[1] = 2; // 수열의 두 번쨰 값 = 2

	for(i = 2; i<=num; i++) {
		p[i] = (p[i-2] * p[i-1])%100; // 수열의 i번쨰 값 = {(i-2번째 수) * (i-1번째 수)} % 100 
	}
	printf("%d",p[num-1]); // 수열의 맨 마지막 값 출력
}
*/

// 나의 생각
// 재귀적 방식을 사용하긴 했다만, 재귀함수가 아닌 인덱스를 조절해서 그냥 수열(=>여기서는 배열로 구현함)을 이용해서 
// 피보나치 수열 비스무리하게 구현한 거 아닌가..?
// 몰라 재귀함수 어려워...