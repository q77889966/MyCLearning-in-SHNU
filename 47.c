#include <stdio.h>
int main()
{
	int i, j, s, k, n;
	for (n = 0, i = 1; i < 250; i++) 
	{
	for (s = 0, j = i; s < 500; j++)
		s += j;
		if(s == 500)
	{ 
		for (k = i; k < j; k++)
			printf("%d ", k); 
		printf("\n");
	
		}

	}
return 0;
}
