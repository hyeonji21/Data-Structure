#include <stdlib.h>
#include <stdio.h>

/* 동적 메모리 할당 */
/* malloc() : 메모리 할당*/
/* free() : 메모리 해제 */
/* realloc() : 메모리를 다시 할당 받을 때 (할당하였던 메모리 블록의 크기를 변경함) */
/* calloc() : 0으로 초기화된 메모리를 할당 / 항목 단위로 메모리를 할당 */

int main(void) {
	int* pi = NULL;
	char* pc = NULL;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("동적 메모리 할당 오류\n");
	}
	*pi = 100;
	printf("%d\n", *pi);
	free(pi);

	/* --------------------------- */

	pc = (char*)malloc(sizeof(char));
	if (pc == NULL) {
		printf("동적 메모리 할당 오류\n");
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