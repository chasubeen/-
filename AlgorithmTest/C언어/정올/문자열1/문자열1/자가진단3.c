/*
문제
문자열을 “Hong Gil Dong”으로 초기화 한 후 3번부터 6번까지의 문자를 차례로 출력하시오.
출력 예
g Gi
*/

#include <stdio.h>

int main()
{
	char a[100] = "Hong Gil Dong";
	int i;
	for (i = 3; i <= 6; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
}