/*
문제
학생들의 점수를 입력을 받다가 0이 입력되면 그 때까지 입력받은 점수를 10점 단위로 구분하여 점수대별 학생 수를 출력하는 프로그램을 작성하시오. 
(1명도 없는 점수는 출력하지 않는다.)
학생은 최대 100명이하이다.

입력 예
63 80 95 100 46 64 88 0
출력 예
100 : 1 person
90 : 1 person
80 : 2 person
60 : 2 person
40 : 1 person

Hint!
10으로 나눈 몫을 기준으로 배열에 넣은 후 출력한다.
*/

#include<stdio.h>
#define SIZE 11

int main(void) {
	int n;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
		arr[i] = 0;
	while (1) {
		scanf("%d", &n);
		for (int i = 0; i < SIZE; i++) {
			if (n / 10 == i)
				arr[i]++;
		}
		if (n == 0) {
			arr[0]--;
			break;
		}
	}
	for (int i = SIZE-1; i>=0; i--) {
		if (arr[i] != 0)
			printf("%d : %d person\n", i * 10, arr[i]);
	}
	return 0;
}