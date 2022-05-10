/*
문제
세 개의 실수를 입력받아 합계와 평균을 구하여 평균을 반올림한 정수를 출력하고, 
다음은 입력받은 수를 각각 먼저 반올림한 후 합계와 평균을 구하여 평균을 반올림한 한 결과를 출력하는 프로그램을 작성하시오.
입력 예
153.74 34.59 109.5
출력 예
99
100
*/
#include<stdio.h>
int n_round(float x); // 함수 선언

int main(void) {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float sum1 = a + b + c;
	float avg1 = sum1 / 3;
	printf("%d\n", n_round(avg1));

	float sum2 = n_round(a) + n_round(b) + n_round(c);
	float avg2 = sum2 / 3;
	printf("%d\n", n_round(avg2));

}

int n_round(float x) {
	int result = (int)(x + 0.5);
	return result;
}