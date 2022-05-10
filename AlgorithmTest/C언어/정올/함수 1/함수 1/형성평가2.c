/*
문제
1부터 전달받은 수까지의 합을 출력하는 함수를 작성하고 
1000 이하의 자연수를 입력받아 작성한 함수로 전달하여 출력하는 프로그램을 작성하시오.
입력 예
100
출력 예
5050
*/

#include<stdio.h>

int add(a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

void main() {
	int a;
	scanf("%d", &a);
	add(a);
}