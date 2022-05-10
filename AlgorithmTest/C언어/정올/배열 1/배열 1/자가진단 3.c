/*
문제
10개의 문자를 입력받아서 첫 번째 네 번째 일곱 번째 입력받은 문자를 차례로 출력하는 프로그램을 작성하시오.
입력 예
A B C D E F G H I J
출력 예
A D G
*/

#include<stdio.h>

void main() {
	char a[10];
	int i;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	printf("%c %c %c\n", a[0],a[3],a[6]);
}