#include<stdio.h>

void main() {
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i <= 4-j;i++) {
			printf("*");
		}
		printf("\n");
	}
}