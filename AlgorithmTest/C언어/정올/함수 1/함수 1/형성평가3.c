/*
문제
자연수를 입력받아 아래와 같은 사각형을 출력하는 프로그램을 작성하시오.
주어지는 수는 100이하의 자연수이다.
(함수를 작성하시오.)
입력 예
3
출력 예
1 2 3
2 4 6
3 6 9
*/

#include<stdio.h>

int square(a) {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("%d ", i*j);
		}
		printf("\n");
	}
}

void main() {
	int a;
	scanf("%d", &a);
	square(a);
}