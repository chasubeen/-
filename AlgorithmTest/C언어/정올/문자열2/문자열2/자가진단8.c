/*
문제
세 개의 단어를 입력받아 아스키코드(사전) 순으로 가장 먼저 나오는 단어를 출력하는 프로그램을 작성하시오.
각 단어의 길이는 1이상 20 이하이다.
입력 예
cat dog cow
출력 예
cat
*/

#include<stdio.h>

void main() {
	char a[20], b[20], c[20];
	scanf("%s %s %s", a, b, c);

	char tmp[20];

	strcpy(tmp, (strcmp(a, b) < 0 ? a : b));
	printf("%s\n", strcmp(tmp, c) < 0 ? tmp : c);
}