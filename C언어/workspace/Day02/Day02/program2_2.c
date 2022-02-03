# include<stdio.h>

void main() 
{
	int a, b; // int형 변수 생성
	printf("a="); // printf: 출력함수
	scanf("%d", &a); // scanf: 입력함수, %d =decimal(10진수 정수)형으로 저장
	
	printf("b=");
	scanf("%d", &b);

	printf("a = %d, b = %d\n", a, b); // printf("출력값", "변수") a,b = 입력값


}