#include<stdio.h>

void static_vtest(); //함수의 원형
void main() {
	static_vtest(); // s_sum = 10
	static_vtest(); // s_sum = 20
	static_vtest(); // s_sum = 30
}

//구현부
void static_vtest() {
	int sum = 0; //지역변수(함수의 생명주기: 함수의 실행~종료)
	static int s_sum = 0; //정적 변수(함수의 생명주기: 프로그램의 실행~종료)
	sum = sum + 10;
	s_sum = s_sum + 10;
	printf("sum:%d,s_sum:%d\n", sum, s_sum);

}