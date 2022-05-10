/*
문제
5개의 문자열을 입력받아 문자열 크기(아스키코드) 역순으로 정렬하여 출력하는 프로그램을 작성하시오.
주어지는 문자열의 길이는 20자 미만이다.
입력 예
Jungol
Korea
information
Monitor
class
출력 예
information
class
Monitor
Korea
Jungol
*/

#include<stdio.h>
#include<string.h>

void main() {
	char a[5][20];
	char tmp[20];

	int i, j;
	for (i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (strcmp(a[i], a[j]) < 0) {
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%s\n", a[i]);
	}
}