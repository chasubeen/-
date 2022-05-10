/*
문제
어떤 학생의 키는 아버지와 어머니의 키의 평균보다 5cm 크고 몸무게는 아버지와 어머니의 몸무게의 평균보다 4.5kg 가볍다고 한다.
키와 몸무게를 멤버변수로 갖는 구조체를 정의하고 아버지와 어머니의 키와 몸무게를 입력받아 학생의 키와 몸무게를 출력하는 프로그램을 작성하시오.
키는 정수미만 버림하고 몸무게는 반올림하여 소수 첫째자리까지 나타낸다.
입력 예
175 68.8
166 56.4
출력 예
height : 175cm
weight : 58.1kg
*/

#include<stdio.h>

typedef struct Family {
	int height;
	float weight;
}family;

void main() {
	family m, d;
	scanf("%d %f", &m.height, &m.weight);
	scanf("%d %f", &d.height, &d.weight);

	printf("height : %dcm\n", (m.height + d.height) / 2 + 5);
	printf("weight : %.1fkg\n", (m.weight + d.weight) / 2 - 4.5);
}