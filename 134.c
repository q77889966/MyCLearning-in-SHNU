#include<stdio.h>
int main() {
	int arr[3][4];
	int i, j;
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i <= 3; i++) {
			printf("%d ", arr[1][i]);
	}
	printf("\n");
	for (i = 0; i <= 3; i++) {
		printf("%d ", arr[2][i]);
	}
	printf("\n");
	for (i = 0; i <= 3; i++) {
		printf("%d ", arr[0][i]);
	}
	return 0;
}