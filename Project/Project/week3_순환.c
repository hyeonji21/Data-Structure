#include <stdio.h>

// 실행 x

void recursion();

int main(void) {
	recursion();
	
	return 0;
}

void recursion() {
	printf("순환\n");
	recursion();
}