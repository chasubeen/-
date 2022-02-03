#include<stdio.h>

void main() {
	int sign;
	printf("신호등 프로그램\n");
	printf("신호를 입력하세요(빨간불:1,파란불:2)\n");
	scanf("%d", &sign);

	switch (sign) {
	case 1:
		printf("정지\n");
		break;
	case 2:
		printf("출발\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		break;

	}
}