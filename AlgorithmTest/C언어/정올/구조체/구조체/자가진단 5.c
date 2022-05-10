/*
문제
5명의 이름과 키를 입력받아 키가 가장 작은 사람의 이름과 키를 출력하는 프로그램을 작성하시오. 이름은 20자 이하이다.
입력 예
Park 175
Lee 180
Choo 185
Son 193
Kim 188
출력 예
Park 175
*/

#include<stdio.h>

typedef struct Student {
	char name[20];
	int height;
}student;

void main() {
	student per[5]; // 한명한명 일일이 치지 말고 변수 5개 생성하자!(솔루션 본 부분)

	int i, tmp, num = 0;
	for (i = 0; i < 5; i++) {
			scanf("%s %d", per[i].name, &per[i].height);
	}

	tmp = per[0].height;
	for (i = 1; i < 5; i++) {
		if (tmp > per[i].height) {
			tmp = per[i].height; //tmp변수에 키의 최솟값 저장(임시변수)
			num = i; //키의 최솟값을 가진 변수의 번호(몇 번 사람이 키가 가장 작은가)
		}
	}
	printf("%s %d\n", per[num].name, per[num].height);
}