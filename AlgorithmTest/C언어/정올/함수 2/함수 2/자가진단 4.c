/*
문제
원의 넓이를 입력받아 반지름의 길이를 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
원의 넓이 = 반지름 * 반지름 * 3.14 식을 이용하시오.
입력 예
314
출력 예
10.00
Hint!
원의 넓이 / 3.14 의 제곱근을 구하면 된다.
*/

#include<stdio.h>
#include<math.h> //sqrt 함수 사용 위함(제곱근 구하기)

int main() {
	int size;
	scanf("%d", &size);
	printf("%.2f\n", sqrt(size / 3.14));
}