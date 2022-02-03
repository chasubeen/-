#include<stdio.h>
void main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a:%d\n", a);
	printf("&b: %d\n", &b); // &b: b 변수가 저장되어 있는 메모리의 시작 위치의 주소
}
