/*
문제
2016년(2월 29일 존재함) 의 날짜를 두 개의 정수 월 일로 입력받아서 입력된 날짜가 존재하면 "OK!" 
그렇지 않으면 "BAD!"라고 출력하는 프로그램을 작성하시오.
입력 예
2 30
출력 예
BAD!
*/

#include<stdio.h>

int m, d;
int check() {
	if (d < 1 || m> 12) {
		return 0;
	}
	switch (m) {
	// 1달에 31일까지 있는 경우
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return d <= 31 ? 1: 0;
	// 1달에 30일까지 있는 경우 
	case 4:
	case 6:
	case 9:
	case 11:
		return d <= 30 ? 1 : 0;
	case 2:
		return d <= 29 ? 1 : 0;
	}
}
void main() {
	scanf("%d %d", &m, &d);
	if (check(m,d) == 0) {
		printf("BAD!\n");
	}
	else {
		printf("OK!\n");
	}
}