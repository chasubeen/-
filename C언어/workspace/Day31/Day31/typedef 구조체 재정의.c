#include<stdio.h>

typedef struct Person {
	char name[20];
	char birth[12];
	long number;
	struct drivingPermit {
		char issuedAt[20];
		long dateOfissue;
		long permitNo;
	}driving;
}person;
int main() {
	person per1 = {
		.name = "MinhoChoi", //필드1
		.birth = "19990120", //필드2
		.number = 9271281,   //필드3
		{
			.issuedAt = "Seoul Korea",
			.dateOfissue = 20190313,
			.permitNo = 192311
		}
	};
	person per2 = { "Soyupark","19990301",9212371,{ "Busan Korea",20190218,291310 } };
	printf("per1 name:%s\n", per1.name);
	printf("per2 name:%s\n", per2.name);
	return 0;

}