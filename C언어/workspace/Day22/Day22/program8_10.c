#include<stdio.h>

void main() {
	int arr[3] = { 1,2,3 };
	printf("�迭��:%d\n",arr);
	printf("ù ��° �ּ�: %d\n", &arr[0]);
	printf("�� ��° �ּ�: %d\n", &arr[1]);
	printf("�� ��° �ּ�: %d\n", &arr[2]);
}