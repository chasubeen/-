/*
문제
원주율을 3.141592로 매크로 상수로 정의하고 원의 넓이를 구하는 매크로 함수를 작성하여 
반지름을 입력받아 원의 넓이를 출력하는 프로그램을 작성하시오. (소수 넷째자리에서 반올림)
입력 예
radius : 1.5
출력 예
area = 7.069
Hint!
원의 넓이 : 반지름 × 반지름 × 원주율(π)
*/

#include<stdio.h>
#define PI 3.141592
#define CIRCLE_SQUARE(x) (x)*(x)*(PI)

int main(void) {
	float r;
	printf("radius : ");
	scanf("%f", &r);
	printf("area = %.3lf\n", CIRCLE_SQUARE(r));
}