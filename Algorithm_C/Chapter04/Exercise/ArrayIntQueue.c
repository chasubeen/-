/* int형 ArrayIntQueue */
#include <stdio.h>
#include <stdlib.h>
#include "ArrayIntQueue.h"

int Initialize(ArrayIntQueue* q, int max) {
	q->num = 0;
	if (q->que = calloc(max, sizeof(int)) == NULL) { // 배열 확보 실패
		q->max = 0;
		return -1;
	}
	q->max = max;
	return 0;
}

int Enque(ArrayIntQueue* q, int x) {
	if (q->num >= q->max)
		return -1; // 큐가 가득 참
	else {
		q->que[q->num++] = x;
		return 0;
	}
}

int Deque(ArrayIntQueue* q, int* x) {
	if (q->num <= 0)
		return -1; // 큐가 비어 있음
	else {
		int i;
		*x = q->que[0];
		for (i = 0; i < q->num - 1; i++) // 큐를 탐색하여
			q->que[i] = q->que[i + 1]; // 요소를 하나씩 앞 인덱스 위치로 옮겨심기
		q->num--; // 개수 줄이기
		return 0;
	}
}

int Peek(const ArrayIntQueue* q, int* x) {
	if (q->num <= 0) // 큐가 비어 있음
		return -1;
	*x = q->que[0];
	return 0;
}

void Clear(ArrayIntQueue* q) {
	q->num = 0;
}

int Capacity(const ArrayIntQueue* q) {
	return q->max;
}

int Size(const ArrayIntQueue* q) {
	return q->num;
}

int IsEmpty(const ArrayIntQueue* q) {
	return q->num <= 0;
}

int IsFull(const ArrayIntQueue* q) {
	return q->num >= q->max;
}

int Search(const ArrayIntQueue* q, int x) {
	int i;
	for (i = 0; i < q->num; i++) {
		if (q->que[i] == x)
			return i;
	}
	return -1;
}

void Print(const ArrayIntQueue* q) {
	int i;
	for (i = 0; i < q->num; i++)
		printf("%d ", q->que[i]);
	putchar('\n');
}

void Terminate(ArrayIntQueue* q) {
	if (q->que != NULL)
		free(q->que);
	q->max = q->num = 0;
}






