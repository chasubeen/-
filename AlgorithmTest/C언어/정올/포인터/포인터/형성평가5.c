/*
문제
정수 n을 입력받아 n개의 정수형 동적배열을 생성하고 n개의 정수를 입력받아 최대값과 최소값을 출력하는 프로그램을 작성하시오.
입력 예
5
15 90 8 36 25
출력 예
max : 90
min : 8
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int *p = (int*)malloc(sizeof(int)*n);
	int max=-9999,min=9999;
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		if (p[i] > max) {
			max = p[i];
		}
		if (p[i] < min) {
			min = p[i];
		}
	}
	printf("max : %d\n", max);
	printf("min : %d\n", min);
}