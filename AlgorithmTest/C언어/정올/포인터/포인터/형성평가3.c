/*
����
�� ���� ������ ������ �����ϰ� �޸� ������ Ȯ���Ͽ� �� ���� �Է¹޾� �� ���� ���� ���밪�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
15 25
��� ��
10
*/

#include<stdio.h>
#include<math.h>

void main() {
	int *a = (int*)malloc(sizeof(int)); // �����Ҵ�
	int *b = (int*)malloc(sizeof(int));
	int *c = (int*)malloc(sizeof(int));

	scanf("%d %d", a, b);
	*c = abs(*a - *b);
	printf("%d\n", *c);
}