#include <stdlib.h>
#include <stdio.h>

/* ���� �޸� �Ҵ� */
/* malloc() : �޸� �Ҵ�*/
/* free() : �޸� ���� */
/* realloc() : �޸𸮸� �ٽ� �Ҵ� ���� �� (�Ҵ��Ͽ��� �޸� ����� ũ�⸦ ������) */
/* calloc() : 0���� �ʱ�ȭ�� �޸𸮸� �Ҵ� / �׸� ������ �޸𸮸� �Ҵ� */

int main(void) {
	int* pi = NULL;
	char* pc = NULL;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
	}
	*pi = 100;
	printf("%d\n", *pi);
	free(pi);

	/* --------------------------- */

	pc = (char*)malloc(sizeof(char));
	if (pc == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	*pc = 'm';
	printf("%c\n", *pc);
	free(pc);

	return 0;
}


/* realloc() */
/*
int *p;
p = (int*) malloc (5 * sizeof(int));
p = (int*) realloc (p, 7 * sizeof(int));

*/

/* calloc() */
/*
int*p
p = (int*) calloc (5, sizeof(int)); 

*/