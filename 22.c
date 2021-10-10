#include<stdio.h>
#include <stdbool.h>
int main()
{
	int a, b, c, x;
	scanf("%d %d %d", &a, &b, &c);
	while (a > b | b > c) {
		if (a > b)
		{
			x = a;
			a = b;
			b = x;
		}
		if (a > c)
		{
			x = a;
			a = c;
			c = x;
		}
		if (b > c)
		{
			x = b;
			b = c;
			c = x;
		}

	}
	printf("%d %d %d", a, b, c);
	return 0;
}