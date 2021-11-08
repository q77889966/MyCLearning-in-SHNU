#include<stdio.h>
int main() {
	int c;
	scanf_s("%d", &c);
    float f;
	if (c == 1) {
		scanf_s("%f", &f);
		f = f * 1.8 + 32;
		printf("%.2f", f);
	}
	else if (c == 2) {
		scanf_s("%f", &f);
		f = (f - 32.0) / 1.8;
		printf("%.2f", f);
	}
	else if (c == 3) {
		return 0;
	}
	return 0;
}