/*
- ����
���� �빮�ڸ� �Է¹޾� 
'A'�̸� ��Excellent��,
'B'�̸� ��Good��,
'C'�̸� ��Usually��,
'D'�̸� ��Effort��,
'F'�̸� ��Failure��,
�� �� �����̸� ��error�� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
- �Է� ��
B
- ��� ��
Good
*/

#include<stdio.h>

void main() {
	char a;
	scanf("%c", &a);

	if (a == 'A'){
		printf("Excellent\n");
	}
	else if (a == 'B') {
		printf("Good\n");
	}
	else if (a == 'C') {
		printf("Usually\n");
	}
	else if (a == 'D') {
		printf("Effort\n");
	}
	else if (a == 'F'){
		printf("Failure\n");
	}
	else {
		printf("error\n");
	}
}