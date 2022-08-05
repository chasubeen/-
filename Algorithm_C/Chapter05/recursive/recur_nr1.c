/* 함수 recur(꼬리 재귀 제거하기) */
void recur(int n) {
Top :
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		n = n - 2;
		goto Top; // 함수의 시작 부분으로 가라.(goto)
	}
}