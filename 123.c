#include<stdio.h>
int main() {
	int arr[3][4];
	int i, j;
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}