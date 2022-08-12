/* 브루트-포스법으로 문자열을 검색하는 프로그램 */
#include<stdio.h>

/* --- 브루트 - 포스법으로 문자열을 검색하는 함수 --- */
int bf_match(const char txt[], const char pat[]) {
	int pt = 0; // txt의 커서
	int pp = 0; // pat의 커서

	while (txt[pt] != '\0' && pat[pp] != '\0') {
		if (txt[pt] == pat[pp]) {
			pt++;
			pp++;
		}
		else {
			pt = pt - pp + 1;
			pp = 0;
		}
	}
	if (pat[pp] == '\0') {
		return pt - pp;
	}
	return -1;
}

void main() {
	int idx;
	char s1[256]; // txt
	char s2[256]; // pattern
	puts("브루트 - 포스법");
	printf("텍스트: ");
	scanf("%s", s1);
	printf("패턴: ");
	scanf("%s", s2);
	idx = bf_match(s1, s2); // 텍스트(s1)에서 패턴(s2)을 브루트 - 포스법으로 검색
	if (idx == -1)
		puts("텍스트에 패턴이 없습니다.");
	else
		printf("%d번째 문자부터 match합니다.\n", idx + 1);

}