#include <stdio.h>

/* 열거형(enum) : 변수가 가질 수 있는 값들을 미리 열거해 높은 자료형*/
/*             : 기억 공간에 저장될 데이터의 집합 */

enum type {tube, lcd, plasma, projection};

int main(void) {
	enum type num;
	while (1) {
		printf("TV 종류(코드) : ");
		scanf_s("%d", &num);
		switch (num) {
		case tube:
			printf("브라운관 TV 선택!\n\n");
			break;
		case lcd:
			printf("LCD TV 선택!\n\n");
			break;
		case plasma:
			printf("PDP TV 선택!\n\n");
			break;
		case projection:
			printf("프로젝션 TV 선택!\n\n");
			break;
		default:
			printf("잘못 선택함! \n\n");
			break;
		}
	}
}