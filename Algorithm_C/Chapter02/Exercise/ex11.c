#include<stdio.h>

// 한 해의 지난 날 수 구하기

// 각 달의 날 수
int mdays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31}, // 윤년이 아닌 경우
	{31,29,31,30,31,30,31,31,30,31,30,31} // 윤년인 경우
};

// 해당 year이 윤연인가?
int isleap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0; // 윤년이면 1 반환
}

// y년 m월 d일의 그 해 지난 날 수를 구합니다.
int dayofyear(int y, int m, int d) {
	int i;
	int days = d; // 날 수 
	for (i = 1; i < m; i++)
		days += mdays[isleap(y)][i - 1];
	return days;
}
void main() {
	int year, month, day; // 년, 월, 일
	int retry; // 다시?
	do {
		printf("년: "); scanf("%d", &year);
		printf("월: "); scanf("%d", &month);
		printf("일: "); scanf("%d", &day);
		printf("%d년의  %d일째입니다.\n", year, dayofyear(year, month, day));
		printf("다시 할까요?(1 ... 예/ 0 ... 아니오): ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}