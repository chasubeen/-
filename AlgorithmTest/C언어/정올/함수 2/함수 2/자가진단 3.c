/*
����
�� ���� ������ �Է¹޾� ���밪�� �� ū ���� ����ϰ� 
�� ���� �Ǽ��� �Է¹޾� ���밪�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ǽ��� �Ҽ��� ���� 2�ڸ����� ����Ѵ�.
�Է� ��
-50 40
-12.34 5.67
��� ��
-50
5.67
*/

# include<stdio.h>
# include<stdlib.h> //abs �Լ� ��� ����(���� ���� ����)
# include<math.h> // fabs �Լ� ��� ����(�Ǽ� ���� ����)

// ���� ���� ��
int big(int a, int b) {
	int big;
	big = abs(a) > abs(b) ? a : b; //abs: ���� ����
	return big;
}

// �Ǽ� ���� ��
double small(double c, double d) {
	double small;
	small = fabs(c) < fabs(d) ? c : d; //fabs : �Ǽ� ����
	return small;
}

void main() {
	int a, b;
	double c, d;

	scanf("%d %d", &a, &b);
	printf("%d\n", big(a, b));

	scanf("%lf %lf", &c, &d);
	printf("%.2f\n", small(c, d));
}

