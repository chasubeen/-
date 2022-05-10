/*
문제
33부터 127 까지의 숫자를 계속 입력받아 입력받은 숫자의 아스키코드에 해당하는 문자를 출력하다가 
범위를 벗어나는 입력이 들어오면 종료하는 프로그램을 작성하시오.
입·출력 예
ASCII code =? 66
B
ASCII code =? 122
z
ASCII code =? 0
Hint!
문자열 개념 Lecture
*/

#include<stdio.h>

void main() {
	int num;
	while (1) {
		printf("ASCII code =? ");
		scanf("%d", &num);
		if (num < 33 || num>127) {
			break;
		}
		printf("%c\n",num);
	}
}