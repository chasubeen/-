/*
- 문제
남자는 'M' 여자는 'F'로 나타내기로 하고 18세 이상을 성인이라고 하자.
성별('M', 'F')과 나이를 입력받아 "MAN"(성인남자), "WOMAN"(성인여자), "BOY"(미성년남자), "GIRL"(미성년여자)을 구분하여 출력하는 프로그램을 작성하시오.
- 입력 예
F 15
- 출력 예
GIRL
*/

#include<stdio.h>

void main() {
	char gender;
	int age;
	scanf("%c %d", &gender, &age);

	if (gender == 'M' && age >= 18) {
		printf("MAN\n");
	}
	else if (gender == 'F' && age >= 18) {
		printf("WOMAN\n");
	}
	else if (gender == 'M' && age < 18) {
		printf("BOY\n");
	}
	else {
		printf("GIRL\n");
	}
}