#include<stdio.h>

struct Person {
	char name[20];
	char birth[12];
	long number;
	struct drivingPermit {
		char issuedAt[20];
		long dateOfissue; //�߱޳����
		long permitNo; //�����ȣ
	}driving; //����ü �� ���� ����
};

int main() {
	struct Person per1;
	per1.driving.dateOfissue = 20190110; //����ü �� ���� ���� -> �ܰ���(.���� ����)����!
	per1.driving.permitNo = 1029312;
	printf("%d %d\n",per1.driving.dateOfissue,per1.driving.permitNo);
}