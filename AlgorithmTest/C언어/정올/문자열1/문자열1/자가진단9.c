/*
문제
문자열을 입력 받아서 문자수만큼 오른쪽으로 한 바퀴 회전하여 출력하는 프로그램을 작성하시오. 문자열의 길이는 100이하이다.
입력 예
PROGRAM
출력 예
MPROGRA
AMPROGR
RAMPROG
GRAMPRO
OGRAMPR
ROGRAMP
PROGRAM
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	int i, j;
	char c;

	scanf("%s", a);
	for (i = 0; i < strlen(a); i++) {
		c = a[strlen(a) - 1]; //처음시작지점 세팅
		for (j = strlen(a) - 1; j >= 0; j--) {
			a[j] = a[j - 1];
		}
		a[0] = c;
		printf("%s\n", a);
	}
}