/*
- 문제
복싱체급은 몸무게가
50.80kg 이하를 Flyweight,
61.23kg 이하를 Lightweight,
72.57kg 이하를 Middleweight,
88.45kg 이하를 Cruiserweight,
88.45kg 초과를 Heavyweight라고 하자.
몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.
- 입력 예
87.3
- 출력 예
Cruiserweight
*/

#include<stdio.h>

void main() {
	float weight;
	scanf("%f", &weight);

	if (weight <= 50.80) {
		printf("Flyweight\n");
	}
	else if (weight <= 61.23) {
		printf("Lightweight\n");
	}
	else if (weight <= 72.57) {
		printf("Middleweight\n");
	}
	else if (weight <= 88.45) {
		printf("Cruiserweight\n");
	}
	else {
		printf("Heavyweight\n");
	}
}