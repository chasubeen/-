#include<stdio.h>
struct Data {
	int num;
	char name[25];
};
void main() {
	struct Data data = {1,"���浿"}; //Data ����ü�� data��� ������ ����� �ʱⰪ ����
	struct Data *pdata;
	pdata = &data;
	printf("num:%d\n", pdata->num); //����ü ���� field�� ���� ->�� ����
	printf("name:%s\n", pdata->name);
}
