/*
문제
자연수 n을 입력받고 1부터 홀수를 차례대로 더해나가면서 합이 n 이상이면 그 때까지 더해진 홀수의 개수와 
그 합을 출력하는 프로그램을 작성하시오.
입력 예
100
출력 예
10 100
*/

#include<stdio.h>

void main() {
	int n,i;
	scanf("%d", &n);
	int sum = 0;
	for (i = 1; sum < n; i += 2) {
		sum += i;
	}
	printf("%d %d\n", i / 2, sum);
}