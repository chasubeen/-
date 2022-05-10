/*
문제
6명의 몸무게를 입력받아 몸무게의 평균을 출력하는 프로그램을 작성하시오.
출력은 반올림하여 소수 첫째자리까지로 한다.
입력 예
23.2 39.6 66.4 50.0 45.6 48.0
출력 예
45.5
*/

#include<stdio.h>

void main() {
	float  a[6];
	float sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf(" %f", &a[i]);
		sum += a[i];
	}
	printf("%.1f\n", sum/6);
}