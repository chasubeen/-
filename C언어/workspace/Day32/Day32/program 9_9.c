#include<stdio.h>

typedef struct s_DATA {
	int grade;
	int class;
	int gender;
}s_data;
typedef struct bit_DATA {
	int grade:3;
	int class:5;
	int gender:2;
}b_data;
void main() {
	s_data s;
	b_data b;
	printf("s_data:%d\n", sizeof(s));
	printf("b_data:%d\n", sizeof(b));

}