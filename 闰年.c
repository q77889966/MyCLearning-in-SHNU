#include<stdio.h>
int main() {
	int y;
	scanf_s("%d", &y);

	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		printf("是闰年");
	}

	else {
		printf("不是闰年");
	}
	return 0;
}