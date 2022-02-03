#include<stdio.h>

union data_1 {
	char ch;
	int num;
	long lo_num;
};
void main() {
	union data_1 u_data;
	printf("union sizeof(u_data):%ld\n", sizeof(u_data));
}