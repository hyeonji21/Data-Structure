#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/* ����ü(union) */
/* : ���� �޸� ������ ���� ���� ������ ���� */

union student {
	int num;
	double grade;
};

int main(void) {
	union student s = { 315 };

	printf("%d\n", sizeof(s));
	printf("�й� : %d\n", s.num);
	printf("���� : %.lf\n", s.grade);

	s.grade = 4.4;   /*�Ѱ��� �ٲٸ� �ٸ� ���鵵 �ٲ�� ��.*/

	printf("�й� : %d\n", s.num);
	printf("���� : %.lf\n", s.grade);

	return 0;
}