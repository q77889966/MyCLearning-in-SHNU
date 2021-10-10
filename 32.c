#include<stdio.h>
#include<stdbool.h>
void main() {
	int m;
	scanf("%d", &m);
	int a = m - 3500;
	float aws;
	_Bool c = (a > 0) & (a <= 1500);
	_Bool d = (a > 1500) & (a <= 4500);
	_Bool e = (a > 4500) & (a <= 9000);
	_Bool f = (m > 9000);
	if (a < 0) {
		aws = 0;
	}
	else {
		if (c == true) {
			aws = a * 0.03;
		}
		else {
			if (d == true) {
				aws = a * 0.1 - 105;
			}
			else {
				if (e == true) {
					aws = a * 0.2 - 555;
				}
				else{
					if (f == true) {
						aws = a * 0.25 - 1005;
					}
				}
			}

		}
	}
	/*if (d == true);
		aws = a * 0.1 - 105;
	if (e==true);
		aws = a * 0.2 - 555;
	if (f==true);
		aws = a * 0.25 - 1005;*/
	printf("%.2f", aws);
}