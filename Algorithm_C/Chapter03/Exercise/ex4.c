// 이진 검색
#include<stdio.h>
#include<stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 이진 검색
int bin_search(const int a[], int n, int key) {
	int i;
	int pl = 0; // 검색 범위 맨 앞의 인덱스
	int pr = n - 1; // 검색 범위 맨 끝의 인덱스
	int pc; // 검색 범위 한가운데의 인덱스

	printf("   |"); // 제일 처음의 |
	for (i = 0; i < n; i++) printf("%4d", i); // 맨 위의 수 출력
	printf("\n---+"); // 구분선 제일 처음(+까지)
	for (i = 0; i < n; i++) printf("----"); // 구분선 따따따
	printf("-\n"); // 개행

	do {
		pc = (pl + pr) / 2;

		/* 과정 출력 */
		printf("   |");
		for (i = 0; i < 4 * pl; i++) printf(" "); // pl 위치까지 이동(공백 표시)
		printf(" <-"); // 맨 앞 요소
		for (i = 0; i < 4 * (pc - pl); i++) printf(" "); // pc 위치까지 이동 
		printf("+"); // 탐색 중앙 요소
		for (i = 0; i < 4 * (pr - pc) - 2; i++) printf(" ");
		printf("->\n"); // 맨 마지막 요소
		printf("%3d|", pc); // 맨 왼쪽에 현재 검색중인 요소의 인덱스 출력
		for (i = 0; i < n; i++)
			printf("%4d", a[i]);
		putchar('\n');

		if (a[pc] == key) // 검색 성공
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);
	return -1;
}

void main() {
	int i, nx, ky, idx;
	int* x; // 배열의 첫 번쨰 요소에 대한 포인터
	puts("이진 검색");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); // 요소의 개수가 nx인 int형 배열 생성
	printf("오름차순으로 입력하세요.\n");
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("검색 값: ");
	scanf("%d", &ky);
	idx = bin_search(x, nx, ky);
	if (idx == -1)
		puts("검색에 실패하였습니다.");
	else
		printf("%d는(은) x[%d]에 있습니다.\n", ky, idx);
	free(x);
}