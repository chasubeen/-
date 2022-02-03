#include<stdio.h>
//선생님의 신상정보를 구조체 저장
// 필드: 이름,주소, 전화번호, 강의과목, 생일 
struct teacher {
	char name[11];
	char adress[30];
	char tel[11];
	char lesson[20];
	long birth; // long: 8byte의 정수값
};

void main() {
	struct teacher tear; //구조에 변수(tear) 생성
	printf("sizeof(struct teacher):%d\n", sizeof(struct teacher));
	printf("sizeof(tear):%d\n", sizeof(tear));
	printf("%p\n", &tear);
	printf("long:%d", sizeof(long));
}