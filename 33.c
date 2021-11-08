#include<stdio.h>
void main() {
	int c,m,t;
	float x;
	scanf_s("%d %d", &m, &t);
	if ((t == 1) | (t == 2) | (t == 3) | (t == 5)) {
		if (t == 1) {
			c = 1;
			x = m * 0.035;
			printf("%.2f", x);
		}
		else if (t == 2) {
			c = 2;
			x = m * 2 * 0.044;
			printf("%.2f", x);
		}
		else if (t == 3) {
			c = 3;
			x = m * 3 * 0.05;
			printf("%.2f", x);
		}
		else if (t == 5) {
			c = 5;
			x = m * 5 * 0.065;
			printf("%.2f", x);
		}
		}
	else {
		printf("ERROR");
	}
}