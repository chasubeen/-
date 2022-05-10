/*
문제
두 개의 정수를 입력받아 절대값이 더 큰 수를 출력하고 
두 개의 실수를 입력받아 절대값이 작은 수를 출력하는 프로그램을 작성하시오.
실수는 소수점 이하 2자리까지 출력한다.
입력 예
-50 40
-12.34 5.67
출력 예
-50
5.67
*/

# include<stdio.h>
# include<stdlib.h> //abs 함수 사용 위함(정수 절댓값 구함)
# include<math.h> // fabs 함수 사용 위함(실수 절댓값 구함)

// 정수 절댓값 비교
int big(int a, int b) {
	int big;
	big = abs(a) > abs(b) ? a : b; //abs: 정수 절댓값
	return big;
}

// 실수 절댓값 비교
double small(double c, double d) {
	double small;
	small = fabs(c) < fabs(d) ? c : d; //fabs : 실수 절댓값
	return small;
}

void main() {
	int a, b;
	double c, d;

	scanf("%d %d", &a, &b);
	printf("%d\n", big(a, b));

	scanf("%lf %lf", &c, &d);
	printf("%.2f\n", small(c, d));
}

