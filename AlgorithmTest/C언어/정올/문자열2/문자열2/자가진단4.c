/*
문제
문자열을 선언하고 다음과 같이 "Hong Gil Dong"이라는 이름을 복사하여 저장한 후 출력하는 프로그램을 작성하시오.
출력 예
Hong Gil Dong
Hint!
strcpy(문자열변수, "Hong Gil Dong");
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[20];
	strcpy(a, "Hong Gil Dong");
	printf("%s\n", a);
}