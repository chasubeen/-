#include<stdio.h>

union data_1 {
	short int num;
	char ch[2];
};

void main() {

	union data_1 data;
	data.ch[0] = 'A';
	data.ch[1] = 'B';

	printf("data.ch[0]:%c\n", data.ch[0]);
	printf("data.ch[1]:%c\n", data.ch[1]);
	printf("data.num:%d\n", data.num);
}