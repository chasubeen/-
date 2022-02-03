#include<stdio.h>

void main() {
	for (int i = 2; i <= 9; i++) {
		for (int k = 1; k <= 9; k++) {
			printf("%dx%d=%d\n", i, k, i*k);
		}
		printf("\n");
	}
}