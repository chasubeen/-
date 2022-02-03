#include<stdio.h>

void main() {
	char str[31]; // 문자 31개를 저장할 수 있는 문자열 str 변수
	printf("입력:");
	//scanf("%s", str); // 문자열을 입력받아 저장할 떄 주소가 필요없음(<- & 입력 필요 x)
	//scanf: 공백o -> 입력이 끝났다고 간주함
	gets(str);
	puts(str);
}