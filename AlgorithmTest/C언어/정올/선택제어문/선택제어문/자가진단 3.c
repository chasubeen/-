/*
- ����
���̸� �Է¹޾� 20�� �̻��̸� "adult"��� ����ϰ� �׷��� ������ �� ���Ŀ� ������ �Ǵ����� "�� years later"��� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
- �Է� ��
18
- ��� ��
2 years later
*/

#include<stdio.h>

void main() {
	int age;
	scanf("%d", &age);

	if (age >= 20) {
		printf("adult\n");
	}
	else {
		printf("%d years later\n", 20 - age);
	}
}