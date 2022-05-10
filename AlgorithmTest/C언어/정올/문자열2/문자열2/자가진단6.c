/*
문제
20자 이하인 두 개의 문자열을 입력받아 첫 번째 문자열의 앞부분 두자를 두 번째 문자열의 앞부분에 복사하고 
다시 뒷부분에 이어 붙여서 저장한 후 두 번째 문자열을 출력하는 프로그램을 작성하시오.
입력 예
ABCDE QWERTY
출력 예
ABERTYAB
*/

#include<stdio.h>

void main() {
	char a[20];
	char b[20];

	scanf("%s %s", a, b);
	strncpy(b, a, 2); // strncpy(문자열1,문자열2,숫자) => 숫자만큼 문자열1에 문자열2 값 복사
	strncat(b, a, 2);
	printf("%s\n", b);
}