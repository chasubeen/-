/*
문제
20 이하의 자연수 N을 입력받아 재귀함수(자기자신을 계속 반복하는 함수)를 이용해서 
문자열 “recursive”를 N번 출력하는 프로그램을 작성하시오.
입력 예
3
출력 예
recursive
recursive
recursive
*/

#include<stdio.h>

//재귀함수 구현
void func(int n) {
	if (n > 1) {
		func(n-1); //자기자신을 n-1바퀴 명령 반복(결론적으론 n번 실행)
	}
	printf("recursive\n");
}

void main() {
	int n;
	scanf("%d", &n);
	func(n);

	return 0; //종료코드 작성 x -> 무한루프 돈다!
}

