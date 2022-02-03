#include<stdio.h>

//열거형 변수 생성
enum COMPUTER{MONITOR,RAM,HDD,DVD};
// 함수 선언
void parts(int);

void main() {

	int code;
	printf("코드입력:");
	scanf("%d", &code);
	parts(code);
}

void parts(int code) {
	enum COMPUTER com_code;
	com_code = code;
	switch (com_code) {
	case MONITOR:
		printf("Monitor-모니터\n");
		printf("단위는 inch\n");
		printf("기타: 해상도, 주파수 등을 고려할 것\n");
		break;
	case RAM:
		printf("RAM-램\n");
		printf("단위는 Mega Byte\n");
		printf("기타:DDR RAM의 속도를 고려할 것\n");
		break;
	case HDD:
		printf("HDD-하드디스크\n");
		printf("단위는 Tera Byte\n");
		printf("기타: 속도를 나타내는 RPM을 확인할 것\n");
		break;
	case DVD:
		printf("DVD ROM- CD 롬\n");
		printf("단위는 배속\n");
		printf("DVD R\W와 DVD R이 있음\n");
		break;
	default:
		printf("input error\n");
	}
}