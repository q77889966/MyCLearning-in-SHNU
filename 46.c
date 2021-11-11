#include <stdio.h>
void main() {
	int i, temp, max1, max2;
	scanf("%d", &temp);

	max1 = temp;
	max2 = temp;
	for (i = 1; i < 10; i++)
	{
		scanf("%d", &temp);
		if (max1 < temp){
			max2 = max1;
			max1 = temp;
		}
		else if(max2 < temp) {
			max2 = temp;
		}
	}
	printf("%d %d", max1, max2);
}