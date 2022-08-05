/* 재귀 호출을 제거한 recur 함수 */
#include<stdio.h>
#include "IntStack.h"

/*--- 함수 recur (재귀를 삭제) ---*/
void recur(int n)
{
	IntStack stk; /* 스택 */
	Initialize(&stk, 100);
Top:
	if (n > 0) {
		Push(&stk, n); /* n 값을 푸시 */
		n = n - 1;
		goto Top;
	}

	if (!IsEmpty(&stk)) {/* 스택이 비어 있지 않으면 */
		Pop(&stk, &n); /* 값을 저장한 n을 팝 */
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
	Terminate(&stk);
}

int main(void){
	int x;
	printf("정수를 입력하세요. :");
	scanf("%d", &x);
	recur(x);
	return 0;
}