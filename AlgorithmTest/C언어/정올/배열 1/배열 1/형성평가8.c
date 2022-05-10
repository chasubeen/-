/*
문제
100 개 이하의 정수를 입력받다가 0 이 입력되면 그 때까지 입력된 정수 중 5의 배수의 개수와 합계 평균을 출력하는 프로그램을 작성하시오.
평균은 소수점 이하 1자리까지 출력한다.
입력 예
35 10 23 100 64 51 5 0
출력 예
Multiples of 5 : 4
sum : 150
avg : 37.5
*/

#include<stdio.h>

void main() {
	int a[100];
	int mul = 0, sum = 0;
	for (int i = 0; i < 100; i++) {
		scanf(" %d", &a[i]);
		if (a[i] % 5 == 0) {
			mul++;
			sum += a[i];
		}
		if (a[i] == 0) {
			mul--;
			break;
		}
	}
	printf("Multiples of 5 : %d\n", mul);
	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", (float)sum / mul);
}