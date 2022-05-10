/*
문제
20 이하의 정수 n을 입력받고 n명의 점수를 입력받아 높은 점수부터 차례로 출력하는 프로그램을 작성하시오.
입력 예
5
35 10 35 100 64
출력 예
100
64
35
35
10
*/

#include<stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	int a[20];
	int tmp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] < a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
