// bsearch 함수를 사용해 오름차순으로 정렬된 배열 검색
#include<stdio.h>
#include<stdlib.h>

// 정수를 비교하는 함수(오름차순)
int int_cmp(const int* a, const int* b) {
	if (*a < *b)
		return -1; // 첫 번째 인수가 가리키는 값이 더 작으면 음수 반환
	else if (*a > *b)
		return 1; // 첫 번째 인수가 가리키는 값이 두 번째 인수가 가리키는 값과 같으면 0 반환
	else
		return 0; // 첫 번째 인수가 가리키는 값이 더 크면 양수 반환
}

void main() {
	int i, nx, ky;
	int* x; // 배열의 첫 번째 요소에 대한 주소값을 가지고 있음
	int* p;
	puts("bsearch 함수를 사용하여 검색");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); // 요소의 개수가 nx인 int형 배열 생성 -> 초기화

	printf("오름차순으로 입력하세요.\n");
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("검색값: ");
	scanf("%d", &ky);
	p = bsearch(&ky, // 검색값에 대한 포인터
				x, // 배열
				nx, // 요소의 개수
				sizeof(int), // 요소의 크기
		(int(*)(const void*, const void*)) int_cmp // 비교 함수
		);
	if (p == NULL)
		puts("검색에 실패했습니다.");
	else
		printf("%d은(는) x[%d]에 있습니다.\n", ky, (int)(p - x));
	free(x);
}