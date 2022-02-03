#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[3][5];
	int x = 1;
	int row,col;
	int **dbptr;
	printf("За: ");
	scanf("%d", &row);
	printf("ї­: ");
	scanf("%d", &col);
	dbptr = (int **)malloc(sizeof(int *)*row);
	for (int i = 0; i < row; i++) {
		dbptr[i] = (int *)malloc(sizeof(int)*col);
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			dbptr[i][j] = x++;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", dbptr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < row; i++) {
		free(dbptr[i]);
	}
	free(dbptr);
}