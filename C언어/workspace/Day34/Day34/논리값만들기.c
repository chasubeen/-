#include<stdio.h>
enum{TRUE=1,FALSE=0};

void main() {
	int sc;
	printf("동의하시면 1을, 동의하지 않으시면 0을 입력해주세요.\n");
	printf("입력:");
	scanf("%d", &sc);
	if (sc == TRUE) {
		printf("동의하셨습니다.\n");
	}
	else if(sc == FALSE){
		printf("동의하지 않으셨습니다.\n");
	}
	else {
		printf("잘못입력하셨습니다.\n");
	}
}