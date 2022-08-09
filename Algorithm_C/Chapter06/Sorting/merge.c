/* 병합 정렬 프로그램 */
#include<stdio.h>
#include<stdlib.h>

static int* buff; /* 작업용 배열 */

/* --- 병합 정렬(main) --- */
static void __mergesort(int a[], int left, int right) {
	if (left < right) {
		int center = (left + right) / 2;
		int p = 0;
		int i;
		int j = 0;
		int k = left;
		__mergesort(a, left, center); // 앞부분에 대한 병합 정렬
		__mergesort(a, center + 1, right); // 뒷부분에 대한 병합 정렬

		/* 앞부분과 뒷부분을 병합 */
		for (i = left; i <= center; i++) // 앞부분 요소를 일단 작업용 배열에 복사
			buff[p++] = a[i];
		while (i <= right && j < p) // 배열 a의 뒷부분과 배열 buff를 배열 a에 병합
			a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];
		while (j < p) // 배열 buff에 남아있는 요소를 배열 a로 복사
			a[k++] = buff[j++];
	}
}

/* 병합 정렬 함수 */
int mergesort(int a[], int n) {
	if ((buff = calloc(n, sizeof(int))) == NULL) // 병합한 결과를 일시적으로 저장할 작업용 배열 생성
		return -1;
	__mergesort(a, 0, n - 1); /* 배열 전체를 병합 정렬 */
	free(buff);
}

void main() {
	int i, nx;
	int* x;
	puts("병합 정렬");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	mergesort(x, nx); // 배열 x를 병합 정렬
	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);
	free(x); // 배열을 해제 
}

