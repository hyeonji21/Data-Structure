#include <stdio.h>

// ���� x

void recursion();

int main(void) {
	recursion();
	
	return 0;
}

void recursion() {
	printf("��ȯ\n");
	recursion();
}