#include<stdio.h>

struct bit_DATA {
	int grade : 3;
	int class :5;
	int gender : 2;
};
void main() {
	struct bit_DATA data;
	data.grade = 1;
	data.class = 10;
	data.gender = 0; //³²ÀÚ

	printf("data.grade:%d\n", data.grade);
	printf("data.class:%d\n", data.class);
	printf("data.gender:%d\n", data.gender);
}