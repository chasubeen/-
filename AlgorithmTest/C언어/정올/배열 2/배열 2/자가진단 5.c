/*
����
2�� 4���� �迭 �� ���� ���� �Է��� �ް� �� �迭�� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
first array
1 2 3 4
5 6 7 8
second array
1 4 7 8
3 6 9 8
��� ��
1 8 21 32
15 36 63 64
*/

#include<stdio.h>

void main() {
	int arr1[2][4];
	int arr2[2][4];
	int i,j;

	printf("first array\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("second array\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr1[i][j]*arr2[i][j]);
		}
		printf("\n");
	}
}
