#include<stdio.h>

void main() {
	int arr[3] = { 1,2,3 };
	printf("배열명:%d\n",arr);
	printf("첫 번째 주소: %d\n", &arr[0]);
	printf("두 번째 주소: %d\n", &arr[1]);
	printf("세 번째 주소: %d\n", &arr[2]);
}