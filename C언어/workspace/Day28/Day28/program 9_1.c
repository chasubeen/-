#include<stdio.h>
#include<string.h>
void tel_find(char *);
	void main() {
		char name[100];
		int a;
		printf("검색할 이름:");
		scanf("%s", &name);
		tel_find(name);
	}
	void tel_find(char * find_name) {
		char *name[10] = {"홍동만","최민주","민영진"}; // 문자형 포인터 배열
		char *tel[10] = {"2222-1123","1004-1004","9999-1234"};
		int i;
		for (i = 0; i < 3; i++) {
			if (!strcmp(name[i], find_name)) { //strcmp: 문자열 비교(string compare)
				                               // 두 문자가 같을 시 실행할 조건문
				printf("%s의 전화번호는 %s입니다.\n", name[i], tel[i]);
				return;  //프로그램 종료
			}
		}
		printf("연락처가 없습니다.\n"); //프로그램 미종료 시 오류코드 출력하고 종료
	}



