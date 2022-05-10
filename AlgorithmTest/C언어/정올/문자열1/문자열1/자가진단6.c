/*
문제
문자를 입력받아 알파벳 문자인 경우에는 그대로 출력하고 
숫자인 경우는 아스키코드값을 출력하는 작업을 반복하다가 기타의 문자가 입력되면 종료하는 프로그램을 작성하시오.
* 입출력예에서 진한글씨가 출력
입·출력 예
A
A
1
49
@
Hint!
문자의 아스키코드를 출력하려면 변환지정을 '%c' 대신 '%d' 로 하면 된다.
fflush함수는 호환성이 떨어지므로 fflush(stdin); 대신 getchar();을 한번 더 써주거나 scanf(" %c", &변수); 로 입력받는 것이 안정적이다.
*/

#include<stdio.h>

int main() {
	char ch;
	while (1) {
		scanf(" %c", &ch);
		if (ch >= 48 && ch <= 57) {
			printf("%d\n", ch);
		}
		else if (ch >= 65 && ch <= 90) {
			printf("%c\n", ch);
		}
		else if (ch >= 97 && ch <= 122) {
			printf("%c\n", ch);
		}
		else {
			break;
		}
	}
}