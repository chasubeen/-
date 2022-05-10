/*
문제
2016년의 날짜를 두 개의 정수 월 일로 입력받아서 입력된 날짜가 존재하면 "OK!" 그렇지 않으면 "BAD!"라고 출력하는 프로그램을 작성하시오.
입력 예
2 30
출력 예
BAD!
*/

#include<stdio.h>
int date(int month,int day) {
	if (month > 12 || day < 1)
		return 0;

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return day <= 31 ? 1 : 0;
	case 4:
	case 6:
	case 9:
	case 11:
		return day <= 30 ? 1 : 0;

	case 2:
		return day <= 29 ? 1 : 0;
	}

}

int main(void) {
	int m, d;
	scanf("%d %d", &m, &d);
	if (date(m,d) == 0)
		printf("BAD!\n");
	else
		printf("OK!\n");
}