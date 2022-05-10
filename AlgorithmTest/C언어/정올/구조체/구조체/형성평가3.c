/*
문제
직사각형의 왼쪽 아래의 좌표(x1, y1)와 오른쪽 위의 좌표(x2, y2)를 저장할 수 있는 구조체 자료형을 만들고 
두 개의 직사각형 자료를 입력받아 두 직사각형을 포함하는 최소의 직사각형 자료를 구하여 구조체 변수에 저장하고 출력하는 프로그램을 작성하시오. 
단, 모든 입력값은 100을 넘지 않는다.
입력 예
1 1 6 5
2 0 7 3
출력 예
1 0 7 5
*/

#include<stdio.h>

typedef struct Square {
	int x1, y1;
	int x2, y2;
}square;

void main() {
	square a1, a2, tmp;

	scanf("%d %d %d %d", &a1.x1, &a1.y1, &a1.x2, &a1.y2);
	scanf("%d %d %d %d", &a2.x1, &a2.y1, &a2.x2, &a2.y2);

	// 최소 사각형의 x1,y1 잡기
	if (a1.x1 < a2.x1) {
		tmp.x1 = a1.x1;
	}
	else {
		tmp.x1 = a2.x1;
	}
	if (a1.y1 < a2.y1) {
		tmp.y1 = a1.y1;
	}
	else {
		tmp.y1 = a2.y1;
	}
	// 최소 사각형의 x2,y2 잡기
	if (a1.x2 < a2.x2) {
		tmp.x2 = a2.x2;
	}
	else {
		tmp.x2 = a1.x2;
	}
	if (a1.y2 < a2.y2) {
		tmp.y2 = a2.y2;
	}
	else {
		tmp.y2 = a1.y2;
	}

	printf("%d %d %d %d\n", tmp.x1, tmp.y1, tmp.x2, tmp.y2);
}