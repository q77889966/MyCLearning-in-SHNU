#include<stdio.h>
int main() {
	int i,j = 1;
	int aws;
	for (i = 1; i <= 9; i++) {
			for (j = i; j <= 9; j++) {
				aws = i * j;
				printf("%d¡Á%d=%2d ", i, j, aws);
			}
		printf("\n");
		}
	return 0;
}