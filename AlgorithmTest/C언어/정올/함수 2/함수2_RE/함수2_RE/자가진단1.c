/*
문제
10 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오. (배열을 전달하는 함수를 이용한다.)
입력 예
4
10 9 2 15
출력 예
15 10 9 2
*/
#include<stdio.h>

void sort(int a[],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	int a[100];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}