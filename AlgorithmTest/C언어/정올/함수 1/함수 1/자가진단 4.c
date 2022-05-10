/*
- 문제
세 개의 정수를 전달받아 최대값을 구하여 리턴하는 함수를 작성하고,
세 정수를 입력받아 최대값을 출력하는 프로그램을 작성하시오.
- 입력 예
-10 115 33
- 출력 예
115
*/

#include<stdio.h>

// 함수 구현부
int max(int a, int b, int c) {

	int max = 0;
	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}

void main() {

	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("%d\n", max(n1,n2,n3)); 
	return 0;
}