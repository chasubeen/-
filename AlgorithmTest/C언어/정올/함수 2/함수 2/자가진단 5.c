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


// 최댓값 구하기
double max(double a, double b, double c) {
	double max;
	max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}
// 최솟값 구하기
double min(double a, double b, double c) {
	double min;
	min = a < b ? a : b;
	min = min < c ? min : c;
	return min;
}
// 중간값 구하기
double center(double a, double b, double c) {
	if (a < max(a, b, c) && a>min(a, b, c)) {
		return a;
	}
	else if (b < max(a, b, c) && b > min(a, b, c)) {
		return b;
	}
	else;
	return c;
}
// 올림 계산
int up(double x) {
	return floor(x) + 1;
}
// 내림 계산
int down(double x) {
	if (x > 0) {
		return floor(x);
	}
	else {
		floor(x);
		return x - 1;
	}
}
// 반올림 계산
int updown(double x) {
	if (x > 0) {
		x += 0.5; // 0.5 추가
		floor(x); // 소숫점 버림
		return x;
	}
	else {
		x -= 0.5;
		floor(x);
		return x;
	}
}
		
int main() {

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%d %d %d\n", up(max(a, b, c)), down(min(a, b, c)), updown(center(a, b, c)));

	return 0;

}