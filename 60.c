#include<stdio.h>
int main() {
	int i;
	int sum=0;
	int n = 100;
	for (i = 1; i <= n;i++) {
		sum = sum + i * i;
	}
	printf("%d", sum);
}