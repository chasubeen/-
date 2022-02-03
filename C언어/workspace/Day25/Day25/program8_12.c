#include<stdio.h>

void main() {
	char * name[5] = {"메모리", "CPU","모니터","메인보드","하드디스크"};
	int code_number;
	printf("Code Number:");
	scanf("%d", &code_number);
	if ((code_number >= 0) && (code_number <= 4)) {
		printf("제품명:%s\n", name[code_number]);
	}
	else {
		printf("제품 코드 입력 오류!");
	}
}