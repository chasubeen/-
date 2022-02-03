#include<stdio.h>

// 함수의 구현(main 밖!)
void sum() {
	int x, y;
	printf("첫 번쨰 수:");
	scanf("%d", &x);
	printf("두 번째 수:");
	scanf("%d", &y);
	printf("두 수의 합:%d\n", x + y);
}

//함수 호출(main 안!)
void f1(int x) { //x는 함수의 호풀부에서 값을 전달받아 저장할 매개변수
	printf("%d\n", x); //매개변수에서 저장한 값을 출력
}

void main() {
	f1(30);

	return 0;
}