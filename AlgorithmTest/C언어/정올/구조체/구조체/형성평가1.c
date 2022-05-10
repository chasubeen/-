/*
문제
이름과 전화번호, 주소를 멤버로하는 구조체를 정의하여 1개의 자료를 입력받고 출력하는 프로그램을 작성하시오.
각각의 길이는 100자 이하다.
입력 예
Lim 1234-5678 Seoul
출력 예
name : Lim
tel : 1234-5678
addr : Seoul
Hint!
전화번호는 문자열로 처리하는 것이 편리하고 일반적이다.
*/

#include<stdio.h>

	struct Member{
		char name[100];
		char tel[100];
		char addr[100];
	};

	void main() {
		struct Member p;
		scanf("%s %s %s", p.name, p.tel, p.addr);
		printf("name : %s\n", p.name);
		printf("tel : %s\n",p.tel);
		printf("addr : %s\n", p.addr);
	}