/*
문제
두 명의 이름과 국어, 영어 점수를 입력받아 과목별 점수의 평균을 구하여 출력하는 프로그램을 작성해 보시오.
(이름은 20자 이하이고 평균의 소수점 이하는 버림한다.)
입력 예
Junho 88 100
Seonbin 95 96
출력 예
Junho 88 100
Seonbin 95 96
avg 91 98
*/

#include<stdio.h>

typedef struct Student {
	char name[20];
	int kor;
	int eng;
}student;

void main() {
	student per1;
	student per2;
	scanf("%s %d %d", per1.name, &per1.kor, &per1.eng);
	scanf("%s %d %d", per2.name, &per2.kor, &per2.eng);
	printf("%s %d %d\n", per1.name, per1.kor, per1.eng);
	printf("%s %d %d\n", per2.name, per2.kor, per2.eng);
	printf("avg %d %d\n",(per1.kor+per2.kor)/2,(per1.eng+per2.eng)/2);
}