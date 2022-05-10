/*
- 문제
영문 대문자를 입력받아 
'A'이면 “Excellent”,
'B'이면 “Good”,
'C'이면 “Usually”,
'D'이면 “Effort”,
'F'이면 “Failure”,
그 외 문자이면 “error” 라고 출력하는 프로그램을 작성하시오.
- 입력 예
B
- 출력 예
Good
*/

#include<stdio.h>

void main() {
	char a;
	scanf("%c", &a);

	if (a == 'A'){
		printf("Excellent\n");
	}
	else if (a == 'B') {
		printf("Good\n");
	}
	else if (a == 'C') {
		printf("Usually\n");
	}
	else if (a == 'D') {
		printf("Effort\n");
	}
	else if (a == 'F'){
		printf("Failure\n");
	}
	else {
		printf("error\n");
	}
}