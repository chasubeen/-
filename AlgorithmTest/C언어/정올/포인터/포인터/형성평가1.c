/*
문제
문자와 실수를 각각 선언 하고 그 주소를 출력하는 프로그램을 작성하시오.
출력 예
11111 22222
Hint!
포인터
*/

#include<stdio.h>

void main() {
	char a;
	double b;
	printf("%p %p\n", &a, &b);
}