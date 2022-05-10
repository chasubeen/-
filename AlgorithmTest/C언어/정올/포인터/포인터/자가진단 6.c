/*
문제
배열의 크기를 입력받아 입력받은 크기만큼 실수 배열을 생성하고 
배열의 원소를 입력받은 후 입력받은 자료 및 합과 평균을 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
입력 예
4
15 23.6 100.35 0.388
출력 예
15.00 23.60 100.35 0.39
hap : 139.34
avg : 34.83
Hint!
입력받은 값을 소수 둘째 자리까지 출력하는 것이고 합계와 평균은 입력 받은 값으로 계산 후 소수 둘째 자리까지 출력하는 것이다.
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
	int n;
	scanf("%d", &n);
	// 동적 메모리 할당(for 실수 배열 형성 위함)
	double *a;
	a = (double *)malloc(sizeof(double) * n); 
	
	int i;
	double sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%.2lf ", a[i]);
		sum += a[i];
	}
	free(a); // 동적 할당 받은 메모리 해제
	printf("\nhap : %.2lf\n", sum);
	printf("avg : %.2lf\n", sum / n);
}