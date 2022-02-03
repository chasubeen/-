#include<stdio.h>
#include<string.h> //문자열 사용하기 위해서
#include<stdlib.h> // 동적 할당 받기 위해서

struct Person {
	char name[20];
	int age;
	char adress[100];
};

void main() {
	struct Person *pptr1 = (struct Person*)malloc(sizeof(struct Person)); //구조체 포인터에 구조체 변수 1개를 동적 할당함
	strcpy(pptr1->name, "최민지"); //strcpy: 문자열 복사 -> pptr1의 name에 저장
	pptr1->age = 25;
	strcpy(pptr1->adress, "서울시 강남구 역삼동");

	printf("이름:%s\n", pptr1->name);
	printf("나이:%d\n", pptr1->age);
	printf("주소:%s\n", pptr1->adress);

	free(pptr1);

	return 0;
}