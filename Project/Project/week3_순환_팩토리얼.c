#include <stdio.h>
int factorial(int);

int main(void) {
	int number, result;
	printf("������ �Է� : ");
	scanf_s("%d", &number);

	result = factorial(number);  // �Լ� ȣ��

	printf("result = %d", result);

	return 0;
}

int factorial(int n) {  // �Լ� factorial
	if (n == 1)
		return 1;
	else
		return (n * factorial(n - 1));  // ��ȯ ȣ��
}