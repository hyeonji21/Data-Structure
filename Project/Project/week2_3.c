#include <stdio.h>

void main() {

	int num[3];

	num[0] = 30;
	num[1] = 40;
	num[2] = 50;

	printf("%d\n", num);

	printf("%d, %d\n", *(num+0), num+0);
	printf("%d, %d\n", *(num+1), num+1);
	printf("%d, %d\n", *(num+2), num+2);

	return 0;

	/* ÁÖ¼Ò : num == &num[0], num+1 = &num[1], num+2 = &num[2] */
	/* °ª : *num == num[0], *(num+1) == num[1], *(num+2) == num[2] */
} 