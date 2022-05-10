/*
문제
아래와 같이 나라 이름을 출력하고 숫자를 입력받아 해당하는 나라의 수도를 출력하는 작업을 반복하다가 
해당하는 번호 이외의 숫자가 입력되면 "none"라고 출력한 후 종료하는 프로그램을 작성하시오.
* 각 나라의 수도 :
대한민국 = 서울(Seoul)
미국 = 워싱턴(Washington)
일본 = 동경(Tokyo)
중국 = 북경(Beijing)

* 입출력시 모양은 "입·출력예"와 같이 하시오.​
입·출력 예
1. Korea
2. USA
3. Japan
4. China
number? 1

Seoul

1. Korea
2. USA
3. Japan
4. China
number? 5

none
*/

#include<stdio.h>

void main() {
	int num;
	
	do {
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");
		

		printf("number? ");
		scanf("%d", &num);
		printf("\n");

		switch (num) {
		case 1:
			printf("Seoul");
			break;
		case 2:
			printf("Washington");
			break;
		case 3:
			printf("Tokyo");
			break;
		case 4:
			printf("Beijing");
			break;
		default:
			printf("none");
			break;
		}
		printf("\n\n");
	} 
	while (num > 0 && num <= 4);
}