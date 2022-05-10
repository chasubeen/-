/*
문제
두 개의 정수를 입력받아 절대값이 더 큰 수를 출력하고 두 개의 실수를 입력받아 절대값이 작은 수를 출력하는 프로그램을 작성하시오.
실수는 소수점 이하 2자리까지 출력한다.
입력 예
-50 40
-12.34 5.67
출력 예
-50
5.67
*/

#include<stdio.h>
int big(int a, int b) {
	if (a >= 0 && b >= 0)
		return a >= b ? a : b;
	else if (a < 0 && b >= 0)
		return (-a) >= b ? a : b;
	else if (a >= 0 && b < 0)
		return a >= (-b) ? a : b;
	else
		return (-a) >= (-b) ? a : b;
}

float small(float c, float d) {
	if (c >= 0 && d >= 0)
		return c >= d ? d : c;
	else if (c < 0 && d >= 0)
		return (-c) >= d ? d : c;
	else if (c >= 0 && d < 0)
		return c >= (-d) ? d : c;
	else
		return (-c) >= (-d) ? d : c;
}

int main(void) {
	int x, y;
	float f1,f2;

	scanf("%d %d", &x, &y);
	scanf("%f %f", &f1, &f2);

	printf("%d\n", big(x, y));
	printf("%.2f\n", small(f1, f2));

	return 0;
}

