/*
문제
정수 N을 입력받고 다시 N개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
(1 ≤ N ≤ 15, 입력과 출력, 정렬은 모두 함수를 이용할 것)
입력 예
5
12 35 1 48 9
출력 예
48 35 12 9 1
*/
#include<stdio.h>
int arrange() {
	int a[16];
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i; j < n; j++) {
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	arrange();
}