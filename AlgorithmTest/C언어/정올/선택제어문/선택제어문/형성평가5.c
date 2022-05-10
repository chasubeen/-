/*
문제
1~12사이의 정수를 입력받아 평년의 경우 입력받은 월을 입력받아 평년의 경우 해당 월의 날수를 출력하는 프로그램을 작성하시오.
입력 예
2
출력 예
28
Hint!
평년의 경우 1월부터 12월까지 일수는 각각 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31일이다.
*/

#include<stdio.h>

void main() {
	int a;
	scanf("%d", &a);

	switch (a) {
	case 2:
		printf("28\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30\n");
		break;
	default:
		printf("31\n");
		break;
	}
}