/* 선형 검색 */
#include<stdio.h>
#include<stdlib.h>

// 요소 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search(const int a[], int n, int key) {
	int i = 0;
	while (1) {
		if (i == n)
			return -1; // 검색 실패
		if (a[i] == key)
			return i; // 검색 성공
		i++;
	}
}

void main() {
	int i, nx, ky, idx;
	int* x; // 배열의 첫 번째 요소에 대한 주소값을 가지고 있음
	puts("선형 검색");
	printf("요소 개수: ");
	scanf("%d", &nx); 
	x = calloc(nx, sizeof(int)); // 요소의 개수가 nx인 int형 배열 생성 -> 초기화
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색 값: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky); // 배열 x의 값이 ky인 요소를 선형 검색
	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
	free(x);
}
