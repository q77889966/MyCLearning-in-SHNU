#include<stdio.h>
void main() {
	int eg, num, oth;
	eg = 0;
	num = 0;
	oth = 0;
	char x;
	while (x=getchar()!= EOF) {
			if ((x >= 'a' && x <= 'z'                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          3
			) || (x >= 'A' && x <= 'Z'))
			eg++;

		else if (x >= '1' && x <= '9') {
			num++;
		}

		else oth++;
	}

	printf("%d %d %d", eg, num, oth);
}