#include<stdio.h>
#define n 10 
int main() {
	int i;
	float a, max, min, sum;
	max = 0;
	min = 10;
	sum = 0;
	for (i = 1; i <= n; i++) {
		scanf("%f", &a);
		if (max < a)
			max = a;
		if (min > a)
			min = a;
		sum += a;
	}
	sum = (sum - max - min) / (n - 2);
	printf("%.3f %.3f %.3f", max, min, sum);
	return 0;
}