#include<stdio.h>

int main(int argc, char *argv[]) {

	int i;
	printf("Program name:%s\n", argv[0]);
	if (argc < 2) {
		printf("옵션을 설정해주셔야 합니다.\n");
	}
	else {
		for (i = 1; i < argc; i++) {
			printf("옵션: %s\n", argv[i]);
		}
	} 
}