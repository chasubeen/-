#include<stdio.h>

void main() {
	int i, j;
	int num1 = 10, num2 = 20, num3 = 30, num4 = 30;
	int arr[2][2] = { 
		{1,2},
		{3,4}
	};
	int *ptr_num[4] = { &num1,&num2,&num3,&num4 }; // �����͹迭(������Ұ� �������� �迭)
	int(*ptr_arr)[2] = arr; // �迭������(ũ�Ⱑ 2�� ������ �迭�� �ּҸ� �����ϴ� ������)

	for (i = 0; i < 4; i++) {
		printf("%d ", *ptr_num[i]);
	}
	printf("\n");
	for (i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", ptr_arr[i][j]);
		}
		printf("\n");
	}
}