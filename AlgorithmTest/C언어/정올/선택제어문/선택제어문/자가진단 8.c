/*
- 문제
4.5 이하의 평점을 입력받아 그 값에 따라 다음과 같이 출력하는 프로그램을 작성하시오.
(switch ~ case문 사용)
단 입력은 0이상 4.5 이하이다.
4.0 이상 : "scholarship"
3.0 이상 : "next semester"
2.0 이상 : "seasonal semester"
2.0 미만 : "retake"​
>> 실수를 정수형(int)으로 변환하여 분기한다. (예 - switch( (int)score ))
- 입력 예
3.5
- 출력 예
next semester
*/

#include<stdio.h>

void main() {
	float a;
	scanf("%f", &a);
	switch ((int) a){
	case 4:
		printf("scholarship\n");
		break;
	case 3:
		printf("next semester\n");
		break;
	case 2:
		printf("seasonal semester\n");
		break;
	default:
		printf("retake\n");
	 }
}