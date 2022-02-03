#include<stdio.h>

void main() {
	int com = 1;
	while (com < 11) { // while(com == 10) -> com = 10일때만 반복문 돌림 -> 오류!
		printf("%d번 컴퓨터를 꺼줘!\n", com);
		com++;
	}
	
}