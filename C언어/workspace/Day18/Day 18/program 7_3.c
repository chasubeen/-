//문자열 복사하기
#include<stdio.h>
#include<string.h>
void main() {
	char country[10] = "Korea";
	char nation[10];

	// nation에 country 값 복사
	strcpy(nation, country);
	printf("country: %s, nation: %s\n",country,nation);
}
