# include <stdio.h>

// 순환
int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return (n * factorial(n - 1));
}


// 반복문
int factorial(int n)
{
	int i, value = 1;
	for (i = 1; i <= n; i++)
		value = value * i;
	return value;
}