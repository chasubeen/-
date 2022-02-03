#include <stdio.h>
//배열의 값을 다른 배열에 복사
void array_copy(int arr_1[5], int arr_2[5]);
void main() {

	int a[5] = { 1,2,3,4,5 };
	int b[5];

	//a의 요소를 b에 복사
	array_copy(a, b);

	printf("a: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("b: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
}

void array_copy(int arr_1[5], int arr_2[5]) {
	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
	}
}