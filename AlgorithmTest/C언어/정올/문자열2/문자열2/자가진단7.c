/*
문제
100개 이하의 문자로 구성된 한 개의 문자열을 입력받아서 
그 문자열에 문자 'c'와 문자열 "ab"의 포함여부를 "Yes", "No"로 구분하여 출력예처럼 출력하는 프로그램을 작성하시오.
입력 예
abdef
출력 예
No Yes
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	scanf("%s", a);
	if (strstr(a, "c")) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	printf(" ");

	if (strstr(a, "ab")) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	printf("\n");
}