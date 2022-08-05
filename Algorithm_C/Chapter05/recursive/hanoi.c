/* 하노이의 탑 */
#include<stdio.h>

/* --- 원반[1] ~ 원반[no]를 x 기둥에서 y 기둥으로 옮김 --- */
void move(int no, int x, int y) {
	if (no > 1)
		move(no - 1, x, 6 - x - y); // 그룹을 시작 기둥에서 중간 기둥으로!
									// 처음 시작 -> 중간 기둥(그룹이 옮겨지는 기둥) -> 마지막 기둥 => 기둥은 항상 3개
	printf("원반[%d]를(을) %d 기둥에서 %d 기둥으로 옮김\n", no, x, y); /* 바닥 원반을 목표 기둥으로*/
	if (no > 1)
		move(no - 1, 6 - x - y, y); /* 그룹을 중간 기둥에서 목표 기둥으로 */
}

void main() {
	int n;
	printf("하노이의 탑\n원반개수: ");
	scanf("%d", &n);
	move(n, 1, 3);
}