#include <stdio.h>

void towers(int n, char source, char dest, char auxiliary)
{
	static int step = 0;

	printf("Towers (%d, %c, %c, %c)\n", n, source, dest, auxiliary);

	if (n == 1)
		printf("\t\t\tStep %3d: Move from %c to %c\n", ++step, source, dest);
	else
	{
		towers(n - 1, source, auxiliary, dest);
		printf("\t\t\tStep %3d: Move from %c to %c\n", ++step, source, dest);
		towers(n - 1, auxiliary, dest, source);
	}
	return;
}

int main(void)
{
	int numDisks;
	printf("Please enter number of disks: ");
	scanf_s("%d", &numDisks);

	printf("Start Towers of Hannoi.\n\n");

	towers(numDisks, 'A', 'C', 'B');

	printf("\nI Hope you didn't select 64 "
		"and end the world!\n");

	return 0;
}