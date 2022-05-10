/*
문제
10개의 문자를 입력받아 마지막으로 입력받은 문자부터 첫 번째 입력받은 문자까지 차례로 출력하는 프로그램을 작성하시오.
입력 예
A E C X Y Z c b z e
출력 예
e z b c Z Y X C E A
*/

#include<stdio.h>

void main() {
	int arr[10];
	int i;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &arr[i]);
	}
	for (i = 9; i >= 0; i--) {
		printf("%c ", arr[i]);
	}
	printf("\n");
}