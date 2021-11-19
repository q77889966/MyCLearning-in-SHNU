#include <stdio.h>
int main() {

	int arr[100][100];
	int i, j, n;
	int aws1 = 1;
	int aws2 = 1;

	scanf("%d", &n);

	for (i = 0; i <= 3; i++) {
		for (j = 0; j <= 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		aws1 = aws1 * arr[i][i];
		aws2 = aws2 * arr[i][n - 1 - i];
	}

	printf("%d %d", aws1, aws2);
	return 0;
}