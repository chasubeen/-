/*
문제
정수형 포인터를 이용하여 값을 입력받고 입력받은 값을 10으로 나눈 몫과 나머지를 출력하는 프로그램을 작성하시오.
입력 예
123
출력 예
12...3
*/

#include<stdio.h>

void main() {
	int a;
	int *ptr = &a;
	scanf("%d", ptr);
	printf("%d...%d\n", *ptr / 10, *ptr % 10);
}