#include<stdio.h>
int main() {
	int i;
	int p[10];
	for (i = 0; i <= 9; i++) {
		scanf("%d", &p[i]);
	}
	for (i = 0; i <= 9; i++) {
		printf("%d ", p[9 - i]);
	}
	return 0;
}