/*
문제
100 미만의 정수만 입력된다. 정수 n을 입력받아 n x n 크기의 숫자사각형을 출력하는 프로그램을 작성하시오.
이때 정수 n을 전달받아 숫자 정사각형을 출력하는 함수를 작성하고, 입력받은 정수 n을 함수로 전달하여 출력한다.
입력 예
4
출력 예
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include<stdio.h>

int n;
void square() {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = n * i + 1; j <= n * i + n; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}

void main() {
	scanf("%d", &n);
	square();
}

/*
솔루션
#include <stdio.h>

// 함수 구현부
void print(int a) 
{
int tmp=1;
int i, j;
for(i=0;i<a;i++){
for(j=0;j<a;j++){
printf("%d ",tmp++); //숫자 증가시키기
}
printf("\n"); // 줄 변경
}
}

int main()
{
int a;
scanf("%d", &a);

print(a);
}
*/