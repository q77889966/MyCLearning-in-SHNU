#include<stdio.h>
int main()
{
	int arr[10][10], i, j, temp;
	scanf("%d", &temp);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			arr[i][j] = 0;
	}
	for (i = 0; i < temp; i++) {
		arr[i][0] = 1;
	}
	for (i = 1; i < temp; i++) {
		for (j = 1; j <= i; j++)
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];      //百度的公式
	}
	for (i = 0; i < temp; i++)
	{
		for (j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}