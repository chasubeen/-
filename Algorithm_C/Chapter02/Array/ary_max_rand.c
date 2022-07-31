#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 배열 요소의 최댓값 구하기(값: 난수 생성)

// 요소 개수가 n인 배열 a의 요소의 최댓값 구하기
int maxof(const int a[], int n) {
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}

void main() {
	int i;
	int* height; // 배열의 첫 번째 요소 포인터
	int number; // 사람 수: 배열 height의 요소 개수
	printf("사람의 수: ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int)); // 요소 개수가 number인 배열 생성
	srand(time(NULL)); // 시간으로 난수의 seed값 초기화
	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90; // 100 ~ 189의 난수 생성 & 대입
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);

	return 0;
}