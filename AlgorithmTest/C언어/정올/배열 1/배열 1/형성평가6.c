/*
문제
6개의 문자배열을 만들고 
{'J', 'U', 'N', 'G', 'O', 'L'} 으로 초기화 한 후 문자 한 개를 입력받아 배열에서의 위치를 출력하는 프로그램을 작성하시오.
첫 번째 위치는 0번이며 배열에 없는 문자가 입력되면 "none" 라는 메시지를 출력하고 끝내는 프로그램을 작성하시오.
입력 예
L
출력 예
5
입력 예
B
출력 예
none
*/

#include<stdio.h>

void main() {
	int a[6] = { 'J','U','N','G','O','L' };
	int i;
	char b;
	scanf("%c", &b);
	/* 틀린부분
	if (b == a[i]) {
		printf("%d\n", i);
	}
	else {
		printf("none\n");
	}
	*/
	for (i = 0; i < 6; i++) {
		if (a[i] == b) {
			printf("%d\n", i);
			return 0;
		}
	}
	printf("none\n");
}