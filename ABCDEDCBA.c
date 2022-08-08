#include <stdio.h>

void printBridgePattern(int n)
{
	if (n <= 0 || n > 26)
	{
		return;
	}
	int i = 0;
	int j = 0;
	printf("\nGiven n : %d \n\n", n);
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			printf("%c", ('A' + j));
		}
		for (j = 0; j < i + i; ++j)
		{
		printf(" ");
		}
		for (j = 'A' + (n - i - 1); j >= 'A'; --j)
		{
			printf("%c", j);
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{
	printBridgePattern(5);
	return 0;
}