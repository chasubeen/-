/*
문제
이름과 전화번호, 주소를 멤버로하는 구조체를 정의하고 3명의 자료를 입력받은 후 사전순으로 이름이 가장 빠른 사람의 자료를 출력하는 프로그램을 작성하시오.
이름, 전화번호, 주소는 모두 15자 이하이다.
입력 예
Lim 1234-5678 Seoul
Hong 2345-6789 Gangwon
Sung 3456-7890 Gyeonggi
출력 예
name : Hong
tel : 2345-6789
addr : Gangwon
*/

#include<stdio.h>
#include<string.h>

typedef struct {
	char name[15];
	char tel[15];
	char addr[15];
}data;

void main() {
	data p[3];
	int i, j;
	char fast[50] = "zz";

	for (i = 0; i < 3; i++) {
		scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
		if (strcmp(p[i].name, fast) < 0) {
			strcpy(fast, p[i].name);
			j = i;
		}
	}
	printf("name : %s\n", p[j].name);
	printf("tel : %s\n", p[j].tel);
	printf("addr : %s\n", p[j].addr);

}