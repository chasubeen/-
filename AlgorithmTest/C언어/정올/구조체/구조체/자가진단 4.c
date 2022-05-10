/*
문제
삼각형의 세 꼭지점의 정수 좌표를 입력받아 삼각형의 무게중심의 실수 좌표를 구하여
소수 첫째자리까지 출력하는 프로그램을 작성하시오.
입력형식
x1 y1 x2 y2 x3 y3​
입력 예
0 0 1 2 10 15
출력 예
(3.7, 5.7)
Hint!
세 꼭지점이 (x1 y1), (x2 y2), (x3 y3)인 삼각형의 무게중심 = ((x1+x2+x3)/3 (y1+y2+y3)/3)
*/

#include<stdio.h>

typedef struct Triangle {
	int x;
	int y;
}triangle;

void main() {
	triangle tri1;
	triangle tri2;
	triangle tri3;
	scanf("%d %d %d %d %d %d", &tri1.x, &tri1.y, &tri2.x, &tri2.y, &tri3.x, &tri3.y);
	printf("(%.1f, %.1f)\n", (float)(tri1.x + tri2.x + tri3.x) / 3, (float)(tri1.y + tri2.y + tri3.y) / 3);

}