/*
����
�� ���� ������ �Է¹޾� ���밪�� �� ū ���� ����ϰ� �� ���� �Ǽ��� �Է¹޾� ���밪�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ǽ��� �Ҽ��� ���� 2�ڸ����� ����Ѵ�.
�Է� ��
-50 40
-12.34 5.67
��� ��
-50
5.67
*/

#include<stdio.h>
int big(int a, int b) {
	if (a >= 0 && b >= 0)
		return a >= b ? a : b;
	else if (a < 0 && b >= 0)
		return (-a) >= b ? a : b;
	else if (a >= 0 && b < 0)
		return a >= (-b) ? a : b;
	else
		return (-a) >= (-b) ? a : b;
}

float small(float c, float d) {
	if (c >= 0 && d >= 0)
		return c >= d ? d : c;
	else if (c < 0 && d >= 0)
		return (-c) >= d ? d : c;
	else if (c >= 0 && d < 0)
		return c >= (-d) ? d : c;
	else
		return (-c) >= (-d) ? d : c;
}

int main(void) {
	int x, y;
	float f1,f2;

	scanf("%d %d", &x, &y);
	scanf("%f %f", &f1, &f2);

	printf("%d\n", big(x, y));
	printf("%.2f\n", small(f1, f2));

	return 0;
}

