#include <stdio.h>
int main() {
	int i, j;
	int arr[3][3],a;
	int sum = 0;

	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	a =   arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
	sum = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])+a;
	printf("%d", sum);
	return 0;
}