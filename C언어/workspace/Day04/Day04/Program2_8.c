# include<stdio.h>
# define CHARGE 2000 // 시간 당 요금

void main() {
	int time, rate; // 정수형 time, 정수형 rate 변수 생성
	printf("사용시간을 입력하세요: "); // 키보드로 입력받은 값을 time에 저장해라!
	scanf("%d", &time); // time: 3 -> rate: 6000

	rate = time* CHARGE;
	printf("사용요금은 %d원 입니다\n", rate);


}