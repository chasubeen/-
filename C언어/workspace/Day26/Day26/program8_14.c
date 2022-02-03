#include<stdio.h>

void main() {
	int a[100], sum = 0, i, j; //정적메모리 사용 -> 메모리의 낭비가 일어난다.ㅡ
	float avg;
	printf("입력할 정수의 개수:");
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		printf("%d번째 데이터 입력:", i + 1);
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	avg = sum / (float)j;
	printf("합계:%d\n", sum);
	printf("평균:%5.3f\n", avg);
}