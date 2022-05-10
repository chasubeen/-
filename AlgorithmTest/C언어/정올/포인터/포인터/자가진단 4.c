/*
문제
5개짜리 정수형 배열을 선언하고 포인터 변수에 저장한 후 포인터 변수를 이용하여 입력을 받은 후 
홀수번째 입력값을 출력하는 프로그램을 작성하시오.
입력 예
1 15 23 9 12
출력 예
1 23 12
*/

#include<stdio.h>

void main() {
	int arr[5];
	int *ptr = arr;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &ptr[i]);
	}
	for (int i = 0; i < 5; i += 2) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}