/*
문제
포인터 변수 두 개를 이용하여 두 수를 입력받고 사칙 연산을 수행하여 출력하는 프로그램을 작성하시오.
입력 예
35 6
출력 예
35 + 6 = 41
35 - 6 = 29
35 * 6 = 210
35 / 6 = 5
*/

#include<stdio.h>

void main() {
	int a, b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	scanf("%d", ptr1);
	scanf("%d", ptr2);
	printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1 + *ptr2);
	printf("%d - %d = %d\n", *ptr1, *ptr2, *ptr1 - *ptr2);
	printf("%d * %d = %d\n", *ptr1, *ptr2, *ptr1 * *ptr2);
	printf("%d / %d = %d\n", *ptr1, *ptr2, *ptr1 / *ptr2);
}