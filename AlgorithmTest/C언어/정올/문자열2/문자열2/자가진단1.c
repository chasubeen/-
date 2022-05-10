/*
문제
5개의 단어를 입력받아 모든 단어를 입력받은 역순으로 출력하는 프로그램을 작성하시오.
각 단어의 길이는 30이하이다.
입력 예
dog
cat
chick
calf
goat
출력 예
goat
calf
chick
cat
dog
*/

#include<stdio.h>

void main() {
	char a[5][30];
	for (int i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	for (int i = 4; i >= 0; i--) {
		printf("%s\n", a[i]);
	}
}