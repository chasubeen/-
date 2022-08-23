#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

void ary_copy(int a[], const int b[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = b[i];
	for (int i = 0; i < n / 2; i++)
		swap(char, a[i], a[n - i - 1]);
}

void main() {
	int i;
	int n;  // 배열 x와 y의 요소 개수 */

	printf("요소의 개수 : ");
	scanf("%d", &n);
	int* x = calloc(n, sizeof(int)); // 요소의 개수가 n인 int형 배열 x를 생성 
	int* y = calloc(n, sizeof(int)); // 요소의 개수가 n인 int형 배열 y를 생성 


	printf("%d개의 정수를 입력하세요.\n", n);
	for (i = 0; i < n; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	ary_copy(y, x, n); // 배열 x의 모든 요소를 배열 y로 복사합니다.

	printf("배열 x의 모든 요소를 배열 y로 역순 복사했습니다.\n");
	for (i = 0; i < n; i++)
		printf("y[%d] = %d\n", i, y[i]);

	free(x); // 배열 x를 해제 
	free(y); // 배열 y를 해제 

}