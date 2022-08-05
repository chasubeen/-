/* 각 열에 1개의 퀸을 배치하는 조합을 재귀적으로 나열하기 */

#include<stdio.h>

int pos[8]; // 각 열에서의 퀸의 위치(행)

// 각 열의 퀸의 위치 출력
void print(void) {
	int i;
	for (i = 0; i < 8; i++)
		printf("%2d", pos[i]);
	putchar('\n');
}

// i열에 퀸을 배치
void set(int i) {
	int j;
	for (j = 0; j < 8; j++) {
		pos[i] = j;
		if (i == 7) // 퀸의 배치가 완료되면
			print(); // 퀸의 위치를 모두 출력
		else
			set(i + 1); // 다음 열에 퀸 배치
	}
}

void main() {
	set(0); // 0열부터 시작
}
 