/*
문제
세 개의 포인터 변수를 선언하고 메모리 공간을 확보하여 두 수를 입력받아 두 수의 차의 절대값을 저장한 후 출력하는 프로그램을 작성하시오.
입력 예
15 25
출력 예
10
*/

#include<stdio.h>
#include<math.h>

void main() {
	int *a = (int*)malloc(sizeof(int)); // 동적할당
	int *b = (int*)malloc(sizeof(int));
	int *c = (int*)malloc(sizeof(int));

	scanf("%d %d", a, b);
	*c = abs(*a - *b);
	printf("%d\n", *c);
}