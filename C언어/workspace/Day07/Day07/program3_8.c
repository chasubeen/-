#include<conio.h>
#include<stdio.h>

void main() {

	char i, j, k;
	printf("입력:");
	i = getch();
	getch();

	j = getch();
	getch();

	k = getch();
	getch();

	printf("\n");
	printf("출력: ");

	putch(i);
	putch(j);
	putch(k);
	getch(); // Enter를 치면 끝내겠다.
}