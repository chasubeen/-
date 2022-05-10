/*
문제
세 개의 실수를 입력받아, 
가장 큰 수를 올림한 정수를 출력하고,
가장 작은 수를 내림한 정수를 출력한 후, 
남은 수를 반올림한 정수를 출력하는 프로그램을 작성하시오.
입력되는 실수는 -1000이상 1000이하이다.

입력 예
3.45 51.48 -100.1
출력 예
52 -101 3
*/

#include<stdio.h>
#include<math.h> //올림: ceil 함수, 내림 : floor 함수, 반올림: floor(N + 0.5); 

int up(float x) {
	return ceil(x);
}

int down(float y) {
	return floor(y);
}

int halfup(float z) {
	return floor(z + 0.5);
}

int main(void) {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float max = a >= b ? a : b;
	max = max > c ? max : c;

	float min = a > b ? b : a;
	min = min > c ? c : min;

	float center;
	if (a<max&&a>min)
		center = a;
	else if (b<max&&b>min)
		center = b;
	else
		center = c;

	printf("%d %d %d\n", up(max), down(min), halfup(center));

}