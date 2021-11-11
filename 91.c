#include<stdio.h>
int main() {
	int i;
	int p[10];
	for (i = 0; i <= 9; i++) {
		scanf("%d", &p[i]);
	}
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d\n", p[4], p[5], p[6], p[7]);
	printf("%d %d", p[8], p[9]);
	return 0;
}