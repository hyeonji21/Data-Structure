#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_LENGTH 16

/* 에러 */

enum season {spring, summer, fall, winter};

int main(void) {
	enum season ss;
	char cp[10];

	while (1) {
		printf("값 입력 : ");
		scanf_s("%d", &ss);

		switch (ss) {
		case spring:
			strcpy_s(cp, MAX_LENGTH, "inline"); break;
		case summer:
			strcpy_s(cp, MAX_LENGTH, "swimming"); break;
		case fall:
			strcpy_s(cp, MAX_LENGTH, "trip"); break;
		case winter:
			strcpy_s(cp, MAX_LENGTH, "skiing"); break;
		}
		printf("레저활동 : %s\n", cp);
	}
	return 0;
}