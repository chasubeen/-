/*
문제
배열의 크기를 입력받아 입력받은 크기만큼 배열에 정수를 입력받고 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
입력 예
4
15 23 100 38
출력 예
100 38 23 15
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
	int n;
	scanf("%d", &n);
	int *a;
	// 동적 메모리 할당 -> 정수형 배열 생성!
	a = (int *)malloc(sizeof(int)*n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
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
	free(a);
	return 0;
}