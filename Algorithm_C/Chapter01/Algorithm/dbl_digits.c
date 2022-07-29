#include<stdio.h>

/* 2자리의 양수(10 ~ 99) 입력하기 */
void main() {
	int n0;
	printf("2자리 정수를 입력하세요.\n");
	do {
		printf("수는: ");
		scanf("%d", &n0);
	} while (n0 < 10 || n0 > 99);
	printf("변수 n0 값은 %d이 되었습니다.\n", n0);

	return 0;
}