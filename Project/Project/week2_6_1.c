#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/* 공용체(union) */
/* : 같은 메모리 영역을 여러 개의 변수가 공유 */

union student {
	int num;
	double grade;
};

int main(void) {
	union student s = { 315 };

	printf("%d\n", sizeof(s));
	printf("학번 : %d\n", s.num);
	printf("학점 : %.lf\n", s.grade);

	s.grade = 4.4;   /*한개를 바꾸면 다른 값들도 바뀌게 됨.*/

	printf("학번 : %d\n", s.num);
	printf("학점 : %.lf\n", s.grade);

	return 0;
}