#include <stdio.h>
int main()
{
	int i, j, sum;
	for (i = 1; i < 500; i++)
	{
		sum = 0;
		for (j = i; j < 500; j++)
		{
			sum += j;
			if (sum == 500)
			{
				printf("500=%d+...+%d\n", i, j); 
			}
		}
	}
	return 0;
}