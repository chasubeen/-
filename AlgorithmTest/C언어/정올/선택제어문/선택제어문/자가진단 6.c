/*
- ����
���ڴ� 'M' ���ڴ� 'F'�� ��Ÿ����� �ϰ� 18�� �̻��� �����̶�� ����.
����('M', 'F')�� ���̸� �Է¹޾� "MAN"(���γ���), "WOMAN"(���ο���), "BOY"(�̼��Ⳳ��), "GIRL"(�̼��⿩��)�� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
- �Է� ��
F 15
- ��� ��
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