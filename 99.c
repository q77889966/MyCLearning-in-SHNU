#include <stdio.h>
#include <stdbool.h>
int main() {
	bool light[20];
	int i, j;
	for (i = 0; i <= 19; i++) {
		light[i] = false;
		
	}
	for (i = 1; i <= 19; i++) {
		if ((i + 1) % 2 == 0) {
			light[i] = true;
		}
	}
	for (j = 2; j <= 19; j++) {
		for (i = 2; i <= 19; i++) {
			if ((i + 1) % (j+1) == 0) {
				light[i] = !light[i];
			}
		}
	}
	for (i = 0; i <= 19; i++) {
		if (light[i] == true) {
			printf("%d ", i+1);
		}
	}
	return 0;
}
