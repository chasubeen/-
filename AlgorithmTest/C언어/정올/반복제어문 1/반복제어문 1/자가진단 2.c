/*
문제
100 이하의 양의 정수만 입력된다.
while 문을 이용하여 1부터 입력받은 정수까지의 합을 구하여 출력하는 프로그램을 작성하시오.
입력 예
10
출력 예
55
*/

#include<stdio.h>

void main() {
	int num;
	int i = 1, sum = 0;
	scanf("%d", &num);
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}