#include<stdio.h>
# define N 5 /* 배열의 요소 개수 */

/* 자료형이 int이고 요소의 개수가 5인 배열 */
void main() {
	int i;
	int a[N]; /* 배열의 선언 */
	for (i = 0; i < N; i++) { /* 각 요소에 값 입력 */
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	puts("각 요소의 값");
	for (i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}