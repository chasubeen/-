// int형 스택 IntStack의 사용
#include<stdio.h>
#include "IntStack.h"

void main() {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("스택 생성에 실패하였습니다.");
		return -1;
	}

	while (1) {
		int menu, x;
		int idx; // 놓친 부분..!
		printf("현재 데이터 수: %d / %d\n", Size(&s), Capacity(&s));
		printf("(1) 푸시 (2) 팝 (3) 피크 (4) 출력 (5) 검색  (6) 초기화 (0) 종료 : ");
		scanf("%d", &menu);
		if (menu == 0) break;

		switch (menu) {
		case 1: // Push
			printf("데이터: ");
			scanf("%d", &x);
			if ((Push(&s, x) == -1) | (IsFull(&s)))
				puts("\a오류: 푸시에 실패하였습니다.");
			break;
		case 2: // Pop
			if ((Pop(&s, &x) == -1) | (IsEmpty(&s)))
				puts("\a오류: 팝에 실패하였습니다.");
			else
				printf("팝 데이터는 %d입니다.\n", x);
			break;

		case 3: // Peek
			if (Peek(&s, &x) == -1)
				puts("\a오류: 피크에 실패하였습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;

		case 4: // 출력
			Print(&s);
			break;
		case 5:
			printf("검색할 데이터: ");
			scanf("%d", &x);

			/* 보충한 부분 */
			if ((idx = Search(&s, x)) == -1)
				puts("\a오류 : 검색에 실패했습니다.");
			else
				printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
			break;

		case 6:
			Clear(&s);
			break;

		}
	}
	Terminate(&s);
}