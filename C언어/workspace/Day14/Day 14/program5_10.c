#include<stdio.h>

int main() {
	int number;
	while (1) {
		printf("���ڸ� �Է��ϼ���:");
		scanf("%d", &number);
		if (number < 0) {
			return 0; // main() ���α׷��� �����Ѵ�.
		}
		if (number % 2 == 0) {
			printf("¦���Դϴ�.\n");
		}
		else {
			printf("Ȧ���Դϴ�.\n");
		}
	}
}