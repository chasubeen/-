/*
문제
"학교명", "학년"을 저장할 수 있는 구조체로 2개의 변수를 선언한 후,
한 개의 변수는 학교명에 "Jejuelementary", 학년에 "6"으로 각각 초기화하고
다른 변수에는 새로운 학교와 학년을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
학교명은 20자 이하의 영문자이다.
입력 예
Seogwipomiddle  1
출력 예
6 grade in Jejuelementary School //초기화한 것
1 grade in Seogwipomiddle School //입력받은 것
*/

#include<stdio.h>

typedef struct Student {
	char school[21];
	int grade;
}student;

void main() {
	student per1 = { "Jejuelementary",6 };
	student per2;

	scanf("%s %d", per2.school, &per2.grade);
	printf("%d grade in %s School\n", per1.grade, per1.school);
	printf("%d grade in %s School\n", per2.grade, per2.school);
}

