/*
문제
20개 이하의 문자로 이루어진 10개의 단어와 한 개의 문자를 입력받아서 
마지막으로 입력받은 문자로 끝나는 단어를 모두 출력하는 프로그램을 작성하시오.
입력 예
champion
tel
pencil
olympiad
class
information
jungol
lesson
book
lion
l
출력 예
tel
pencil
jungol
Hint!
마지막 문자의 위치를 알기 위해서는 먼저 단어의 길이를 알아야 한다. 마지막 문자는 그 길이-1의 위치에 있다.
*/

#include<stdio.h>

void main() {
	char a[10][20];
	for (int i = 0; i < 10; i++) {
		scanf("%s", a[i]);
	}
	char b;
	scanf(" %c", &b);

	for (int i = 0; i < 10; i++) {
		if (a[i][strlen(a[i]) - 1] == b) {
			printf("%s\n", a[i]);
		}
	}
}