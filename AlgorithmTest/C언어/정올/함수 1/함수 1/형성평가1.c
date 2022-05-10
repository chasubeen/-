/*
문제
‘@’문자를 10개 출력하는 함수를 작성 한 후 함수를 세 번 호출하여 아래와 같이 출력하는 프로그램을 작성하시오.
출력 예
first
@@@@@@@@@@
second
@@@@@@@@@@
third
@@@@@@@@@@
*/

#include<stdio.h>

char printer() {
	printf("@@@@@@@@@@");
	return 0;
}

void main() {
	printf("first\n");
	printer();
	printf("\n");
	printf("second\n");
	printer();
	printf("\n");
	printf("third\n");
	printer();
	printf("\n");
}
