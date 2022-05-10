/*
문제
두 개의 문자열을 입력받아서 두 문자열의 길이의 합을 출력하는 프로그램을 작성하시오.
각 문자열의 길이는 20자 미만이다.
입력 예
Korean
English
출력 예
13
*/

#include<stdio.h>

void main() {
	int a[20];
	int b[20];
	int len;
	scanf("%s", a);
	scanf("%s", b);
	len = strlen(a) + strlen(b);
	printf("%d\n", len);
}