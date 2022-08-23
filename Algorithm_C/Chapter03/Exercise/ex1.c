#include<stdio.h>
#include<stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색_ 보초법

int search(int a[], int n, int key) {
	int i;
	a[n] = key;
	for(i = 0;i<n;i++){
		if (a[i] == key)
			break;
	}
	return i == n ? -1 : i;
}

void main() {
	int i, nx, ky, idx;
	int* x; // 배열의 첫 번째 요소에 대한 주소값을 가지고 있음
	puts("선형 검색(보초법)");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = (int*)calloc(nx + 1, sizeof(int)); // 요소의 개수가 (nx + 1)인 int형 배열 생성 -> 초기화
	for (i = 0; i < nx; i++) { // 주의> 값을 읽어들인 것은 nx개이다.
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