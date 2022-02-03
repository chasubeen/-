#include<stdio.h>

void  main() {

	int a = 10, b = 20;
	// 삼항연산자
	// 조건 ? 참일 때 값 : 거짓일 때 값
	a >= b ? printf("%d\n", a) : printf("%d\n", b);
}