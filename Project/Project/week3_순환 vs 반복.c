# include <stdio.h>

// ��ȯ
int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return (n * factorial(n - 1));
}


// �ݺ���
int factorial(int n)
{
	int i, value = 1;
	for (i = 1; i <= n; i++)
		value = value * i;
	return value;
}