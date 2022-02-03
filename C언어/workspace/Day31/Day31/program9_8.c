#include<stdio.h>

struct Person {
	char name[20];
	char birth[12];
	long number;
	struct drivingPermit {
		char issuedAt[20];
		long dateOfissue; //발급년월일
		long permitNo; //면허번호
	}driving; //구조체 내 변수 생성
};

int main() {
	struct Person per1;
	per1.driving.dateOfissue = 20190110; //구조체 내 변수 접근 -> 단계적(.으로 구분)으로!
	per1.driving.permitNo = 1029312;
	printf("%d %d\n",per1.driving.dateOfissue,per1.driving.permitNo);
}