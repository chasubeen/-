#include<stdio.h>
#include<stdlib.h>

// 배열 요소를 역순으로 정렬하기

// type형 x와 y 값을 교환
#define swap(type,x,y) do{type t = x;x = y;y = t;}while(0)

// 배열의 요소 출력
void ary_print(int a[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

// 요소 개수가 n인 배열 a의 요소를 역순으로 정렬
void ary_reverse(int a[], int n) {
	int i;
	for (i = 0; i < n / 2; i++) {
		ary_print(a, n);
		printf("a[%d]와 a[%d]를 교환합니다.\n", i, (n - i - 1));
		swap(int, a[i], a[n - i - 1]);
	}
	ary_print(a, n);
	printf("역순 정렬을 종료합니다.");
}

void main() {
	int i;
	int* x;
	int nx;

	printf("요소의 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	ary_reverse(x, nx);
	free(x);

	return 0;
}
