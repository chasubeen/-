/* 배열 요소의 최댓값 구하기 */
#include<stdio.h>
#include<stdlib.h>

int minof(const int a[], int n) {
	int i;
	int min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min) min = a[i];
	return min;
}

void main() {
	int i;
	int* height; // 배열의 첫 번째 요소의 포인터
	int number; // 인원 = 배열 height의 요소의 개수
	printf("사람 수: ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int)); // 요소 개수가 number인 키 배열 생성
	printf("%d 사람의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}
	printf("최솟값은 %d입니다.\n", minof(height, number));
	free(height); // 배열의 메모리 해제
}