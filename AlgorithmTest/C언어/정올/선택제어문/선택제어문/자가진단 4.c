/*
- ����
����ü���� �����԰�
50.80kg ���ϸ� Flyweight,
61.23kg ���ϸ� Lightweight,
72.57kg ���ϸ� Middleweight,
88.45kg ���ϸ� Cruiserweight,
88.45kg �ʰ��� Heavyweight��� ����.
�����Ը� �Է¹޾� ü���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
- �Է� ��
87.3
- ��� ��
Cruiserweight
*/

#include<stdio.h>

void main() {
	float weight;
	scanf("%f", &weight);

	if (weight <= 50.80) {
		printf("Flyweight\n");
	}
	else if (weight <= 61.23) {
		printf("Lightweight\n");
	}
	else if (weight <= 72.57) {
		printf("Middleweight\n");
	}
	else if (weight <= 88.45) {
		printf("Cruiserweight\n");
	}
	else {
		printf("Heavyweight\n");
	}
}