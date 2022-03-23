#include <stdio.h>
#include <malloc.h>

/* 정적 */
/*
int main(void){
	int i, size=5;
	int arr[5];

	for(i = 0; i < size; i++){
		arr[i] = i;
	} 
	
	for(i = 0; i < size; i++){
		printf("%d\n", arr[i]);
	}

	return 0;
}
*/

/* 동적 */
int main(void) {
	int i, size = 5;
	int* arr;

	arr = (int*)malloc(sizeof(int) * size);
	for (i = 0; i < size; i++) {
		*(arr + i) = i;
	}
	
	for (i = 0; i < size; i++) {
		printf("%d\n", *(arr + i));
	}
	free (arr);

	return 0;
}