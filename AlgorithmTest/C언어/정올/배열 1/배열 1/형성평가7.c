/*
문제
세 자리 이하의 정수를 차례로 입력 받다가 999가 입력되면 프로그램을 종료하고 
그 때까지 입력된 최대값과 최소값을 출력하는 프로그램을 작성하시오.입력받는 정수는 100개 이하이다.
입력 예
45 19 123 58 10 -55 16 -1 999
출력 예
max : 123
min : -55
*/

#include<stdio.h>

void main() {
	int a[101];
	int max = -999999, min = 999999;
	for (int i = 0; i < 100; i++) {
		scanf(" %d", &a[i]);
		if (a[i] == 999) {
			break;
		}
		if (min > a[i]) {
			min = a[i];
		}
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("max : %d\n", max);
	printf("min : %d\n", min);
}