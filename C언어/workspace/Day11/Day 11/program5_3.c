#include<stdio.h>

void main() {
	int a;
	printf("�����Է�:");
	scanf("%d", &a);
	
	switch (a/10) {
	case 10: // case 10 �ؿ� break;�� ���� ->  case 9�� �����ϰ� ó���Ѵ�.
		     // (������ �����ͼ� �񱳸� �����Ѵ�.)
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