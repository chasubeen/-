/*
����
���簢���� ���� �Ʒ��� ��ǥ(x1, y1)�� ������ ���� ��ǥ(x2, y2)�� ������ �� �ִ� ����ü �ڷ����� ����� 
�� ���� ���簢�� �ڷḦ �Է¹޾� �� ���簢���� �����ϴ� �ּ��� ���簢�� �ڷḦ ���Ͽ� ����ü ������ �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��, ��� �Է°��� 100�� ���� �ʴ´�.
�Է� ��
1 1 6 5
2 0 7 3
��� ��
1 0 7 5
*/

#include<stdio.h>

typedef struct Square {
	int x1, y1;
	int x2, y2;
}square;

void main() {
	square a1, a2, tmp;

	scanf("%d %d %d %d", &a1.x1, &a1.y1, &a1.x2, &a1.y2);
	scanf("%d %d %d %d", &a2.x1, &a2.y1, &a2.x2, &a2.y2);

	// �ּ� �簢���� x1,y1 ���
	if (a1.x1 < a2.x1) {
		tmp.x1 = a1.x1;
	}
	else {
		tmp.x1 = a2.x1;
	}
	if (a1.y1 < a2.y1) {
		tmp.y1 = a1.y1;
	}
	else {
		tmp.y1 = a2.y1;
	}
	// �ּ� �簢���� x2,y2 ���
	if (a1.x2 < a2.x2) {
		tmp.x2 = a2.x2;
	}
	else {
		tmp.x2 = a1.x2;
	}
	if (a1.y2 < a2.y2) {
		tmp.y2 = a2.y2;
	}
	else {
		tmp.y2 = a1.y2;
	}

	printf("%d %d %d %d\n", tmp.x1, tmp.y1, tmp.x2, tmp.y2);
}