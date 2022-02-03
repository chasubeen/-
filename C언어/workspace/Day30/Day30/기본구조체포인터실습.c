#include<stdio.h>
struct Data {
	int num;
	char name[25];
};
void main() {
	struct Data data = {1,"가길동"}; //Data 구조체에 data라는 변수를 만들어 초기값 지정
	struct Data *pdata;
	pdata = &data;
	printf("num:%d\n", pdata->num); //구조체 내의 field에 대해 ->로 접근
	printf("name:%s\n", pdata->name);
}
