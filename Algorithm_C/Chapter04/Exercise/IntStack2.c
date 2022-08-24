#include <stdio.h>
#include <stdlib.h>
#include "IntStack2.h"

int Initialize(IntStack* s, int max) {
	s->ptrA = 0;
	if ((s->stk = calloc(max, sizeof(int))) == NULL) { // 배열 생성 실패 
		s->max = 0;
		s->ptrB = 0;
		return -1;
	}
	s->ptrB = max - 1;
	s->max = max;

	return 0;
}

int Push(IntStack* s, int sw, int x) {
	if (s->ptrA >= s->ptrB + 1) // 스택 A가 스택 B 영역과 겹쳐지기 시작하면
		return -1;

	// 선택된 스택에 따라
	switch (sw) { 
	case StackA: s->stk[s->ptrA++] = x;  break; // 스택 A에 푸시
	case StackB: s->stk[s->ptrB--] = x;  break; // 스택 B에 푸시
	}
	return 0;
}

int Pop(IntStack* s, int sw, int* x) {
	// 선택된 스택에 따라
	switch (sw) {
	case StackA:
		if (s->ptrA <= 0) // 더 이상 Pop할 요소가 없으면
			return -1;
		*x = s->stk[--s->ptrA];
		break;

	case StackB:
		if (s->ptrB >= s->max - 1) // 더 이상 Pop할 요소가 없으면
			return -1;
		*x = s->stk[++s->ptrB];
		break;
	}
	return 0;
}

int Peek(const IntStack* s, int sw, int* x) {
	switch (sw) {
	case StackA:
		if (s->ptrA <= 0) // 스택에 요소가 없다면
			return -1;
		*x = s->stk[s->ptrA - 1]; // 제일 마지막 요소 보여주기
		break;
	case StackB:
		if (s->ptrB >= s->max - 1)
			return -1;
		*x = s->stk[s->ptrB + 1];
		break;
	}
	return 0;
}

void Clear(IntStack* s, int sw) {
	switch (sw) {
	case StackA: s->ptrA = 0;			break;
	case StackB: s->ptrB = s->max - 1;	break;
	}
}

int Capacity(const IntStack * s){
	return s->max;
}

int Size(const IntStack* s, int sw) {
	return (sw == StackA) ? s->ptrA : s->max - s->ptrB - 1;
}

int IsEmpty(const IntStack* s, int sw) {
	return (sw == StackA) ? (s->ptrA <= 0) : (s->ptrB >= s->max - 1);
}

int IsFull(const IntStack* s) {
	return (s->ptrA) >= (s->ptrB + 1);
}

int Search(const IntStack* s, int sw, int x) {
	int i;
	switch (sw) {
	case StackA:
		for (i = s->ptrA - 1; i >= 0; i--)
			if (s->stk[i] == x)
				return i;
		return -1;
	case StackB:
		for (i = s->ptrB + 1; i < s->max; i++)
			if (s->stk[i] == x)
				return i;
		return -1;
	}
}

void Print(const IntStack* s, int sw) {
	int i;
	switch (sw) {
	case StackA:
		for (i = 0; i < s->ptrA - 1; i++)
			printf("%d ", s->stk[i]);
		break;
	case StackB:
		for (i = s->ptrB + 1; i < s->max; i++)
			printf("%d ", s->stk[i]);
		break;
	}
	putchar('\n');
}

void Terminate(IntStack *s){
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptrA = s->ptrB = 0;
}