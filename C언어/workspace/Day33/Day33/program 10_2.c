#include<stdio.h>

union data_1 {
	char ch;
	short int num;
	long lo_num;
};
void main() {
	union data_1 data;
	data.lo_num = 409612865;
	printf("char:%c\n", data.ch);
	printf("short int:%d\n", data.num);
	printf("long: %ld\n", data.lo_num);
}