/*
문제
문자열을 입력받은 뒤 그 문자열을 이어서 두 번 출력하는 프로그램을 작성하시오.
문자열의 길이는 100이하이다.
입력 예
ASDFG
출력 예
ASDFGASDFG
*/

#include<stdio.h>

void main() {
	char a[100];
	scanf("%s", a);
	printf("%s%s\n", a, a);
}