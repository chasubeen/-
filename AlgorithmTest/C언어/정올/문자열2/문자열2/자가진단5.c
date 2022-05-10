/*
문제
20개 이하의 문자열로 된 이름을 입력받아서 그 뒤에 "fighting"을 붙여서 저장하고 출력하는 프로그램을 작성하시오.
입력 예
Korea
출력 예
Koreafighting
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[20];
	scanf("%s", a);
	strcat(a, "fighting");
	printf("%s\n", a);
}