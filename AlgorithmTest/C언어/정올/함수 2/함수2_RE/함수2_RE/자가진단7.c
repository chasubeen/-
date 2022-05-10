/*
문제
main() 함수 내에는 숫자를 사용하지 말고 즉, #define 을 이용하여 1, 2, 3 세 개의 숫자를 조합하여 
가능한 한 모든 합을 출력하는 프로그램을 작성하시오.
출력예와 같이 출력하시오.
출력 예
1 + 1 = 2
1 + 2 = 3
1 + 3 = 4
2 + 1 = 3
2 + 2 = 4
2 + 3 = 5
3 + 1 = 4
3 + 2 = 5
3 + 3 = 6
Hint!
#define one 1....
*/

#define one 1
#define two 2
#define three 3

#include<stdio.h>
void main() {
	printf("%d + %d = %d\n", one, one, one + one);
	printf("%d + %d = %d\n", one, two, one + two);
	printf("%d + %d = %d\n", one, three, one + three);
	printf("%d + %d = %d\n", two, one, two + one);
	printf("%d + %d = %d\n", two, two, two + two);
	printf("%d + %d = %d\n", two, three, two + three);
	printf("%d + %d = %d\n", three, one, three + one);
	printf("%d + %d = %d\n", three, two, three + two);
	printf("%d + %d = %d\n", three, three, three + three);
}
