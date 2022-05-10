/*
문제
문자 10개를 저장할 수 있는 배열을 만들고 10개의 문자를 입력받아 입력받은 문자를 이어서 출력하는 프로그램을 작성하시오.
입력 예
A B C D E F G H I J
출력 예
ABCDEFGHIJ
Hint!
문자를 입력받을 때는 %c 앞에 반드시 공백이 필요함을 잊지 말자.
*/

#include<stdio.h>

void main() {
	int i;
	char text[10];
	for (i = 0; i < 10; i++) {
		scanf(" %c", &text[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("%c", text[i]);
	}
	printf("\n");
}