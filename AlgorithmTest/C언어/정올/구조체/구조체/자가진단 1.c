/*
문제
"이름", "학교명", "학년"을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
(이름과 학교명은 각각 20자 이하이다.)

입력 예
Songjunhyuk Beolmal 6
출력 예
Name : Songjunhyuk
School : Beolmal
Grade : 6
*/

#include<stdio.h>

struct Student {
	char name[20];
	char school[20];
	int grade;
};

void main() {
	struct Student per1; //구조체 변수 선언
		scanf("%s %s %d",per1.name,per1.school,&per1.grade);
		printf("Name : %s\n", per1.name);
		printf("School : %s\n", per1.school);
		printf("Grade : %d\n", per1.grade);
}