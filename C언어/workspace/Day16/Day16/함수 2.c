#include<stdio.h>

void sum1(){}
void f1(int x) {}
void sum2(int x ,int y){
}
int f2() {
}
int sum3(int x, int y) {
	int result = x + y;
	return result;
}
void main() {
	printf("%d\n",sum3(10, 20));
}