#include<stdio.h>

void main() {
	int a;
	printf("점수입력:");
	scanf("%d", &a);
	
	switch (a/10) {
	case 10: // case 10 밑에 break;가 없음 ->  case 9와 동일하게 처리한다.
		     // (밑으로 내려와서 비교를 수행한다.)
	case 9:
		printf("Grade:A\n");
		break;
	case 8:
		printf("Grade:B\n");
		break;
	case 7:
		printf("Grade:C\n");
		break;
	case 6:
		printf("Grade:D\n");
		break;
	default:
		printf("Grade:F\n");
		break;
	}
	
}