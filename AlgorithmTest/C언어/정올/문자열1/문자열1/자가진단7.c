/*
문제
문자열을 입력받아 알파벳 문자만 모두 대문자로 출력하는 프로그램을 작성하시오.
문자열의 길이는 100이하이다.
입력 예
1988-Seoul-Olympic!!!
출력 예
SEOULOLYMPIC
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[100];
	int i;
	scanf("%s", &a);
	for (i = 0; i < strlen(a); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			printf("%c", a[i]);
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			printf("%c", a[i] - 32);
		}
	}
	printf("\n");
}