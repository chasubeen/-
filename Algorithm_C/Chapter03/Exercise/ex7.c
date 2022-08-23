#include<stdio.h>
#include<stdlib.h>

/* 비교 함수  compar을 사용하여 선형 검색 */
void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size,
	int(*compar)(const void*, const void*))
{
	size_t i;
	char* x = (char*)base;
	for (i = 0; i < nmemb; i++) // 요소의 개수만큼 비교 작업 수행
		if (!compar((const void*)&x[i * size], key)) // 검사 대상이 key와 일치하지 않는다면
			return (&x[i * size]); // 검사하는 대상(배열) 중에 일치하는 요소에 대한 포인터를 반환
	return NULL; //  검색 실패(일치하는 요소가 없음)
}

/*--- 정수를 비교하는 함수 ---*/
int int_cmp(const int* a, const int* b) {
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

void main() {
	int i, nx, ky;
	int* x; // 배열의 첫 번째 요소에 대한 포인터 
	int* p; // 검색된 요소에 대한 포인터

	puts("seqsearch 함수를 사용하여 검색");
	printf("요소의 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); // 요소의 개수가 nx인 int형 배열을 생성

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("검색 값 : ");
	scanf("%d", &ky);

	p = seqsearch(&ky, // 검색 값에 대한 포인터
		x, // 배열
		nx, // 요소의 개수
		sizeof(int), // 요소의 크기 
		(int(*)(const void*, const void*))int_cmp	 // 비교 함수 
	);

	if (p == NULL)
		puts("검색에 실패했습니다.");
	else
		printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));

	free(x);
}
