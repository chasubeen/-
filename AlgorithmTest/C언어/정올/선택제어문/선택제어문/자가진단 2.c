/*
����
��������+100-Ű���� �񸸼�ġ �����̶�� ����.
Ű�� �����Ը� �ڿ����� �Է¹޾� ù ��° �ٿ� �񸸼�ġ�� ����ϰ�, 
�񸸼�ġ�� 0���� ũ�� �����ٿ� ��("Obesity")�̶�� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (��������� �Ʒ� ��� ���� �����ϼ���.)
�Է� ��
155 60
��� ��
5
Obesity
*/

#include<stdio.h>

void main() {
	int height, weight;
	
	scanf("%d %d", &height, &weight);
	printf("%d\n", weight + 100 - height);

	if ((weight + 100 - height) > 0) {
		printf("Obesity\n");
	}
}