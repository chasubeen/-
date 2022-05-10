/*
문제
5명의 이름과 키, 몸무게를 입력받아 이름순으로 정렬하여 출력하고,
몸무게가 무거운 순으로 정렬하여 출력하는 프로그램을 작성하시오.
몸무게는 소수점이하 1자리까지 출력한다.
입력 예
Lee 150 35.6
Kim 155 28.9
Sin 148 32.7
Jung 160 41.2
Park 165 38.7

출력 예
name
Jung 160 41.2
Kim 155 28.9
Lee 150 35.6
Park 165 38.7
Sin 148 32.7

weight
Jung 160 41.2
Park 165 38.7
Lee 150 35.6
Sin 148 32.7
Kim 155 28.9
*/

#include<stdio.h>
#include<string.h>

typedef struct Person {
	char name[20];
	int height;
	float weight;
}person;

void main() {
	person tmp; //임시 변수 생성해놓기
	person per[5]; //구조체 배열 선언
	int i, j;
	
	//정보 입력받기
	for (i = 0; i < 5; i++) {
		scanf("%s %d %f", per[i].name, &per[i].height, &per[i].weight);
	}
	// 이름 정렬하기(strcmp이용하기)
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (strcmp(per[i].name, per[j].name) > 0) { //문자열1이 문자열2보다 우선순위
				tmp = per[i];
				per[i] = per[j];
				per[j] = tmp;
			}
		}
	}
	printf("name\n");
	for (i = 0; i < 5; i++) {
		printf("%s %d %.1f\n", per[i].name, per[i].height, per[i].weight);
	}

	//몸무게 정렬하기
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (per[i].weight < per[j].weight) {
				tmp = per[i];
				per[i] = per[j];
				per[j] = tmp;
			}
		}
	}
	printf("\nweight\n");
	for (i = 0; i < 5; i++) {
		printf("%s %d %.1f\n", per[i].name, per[i].height, per[i].weight);
	}
}