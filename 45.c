#include<stdio.h>
int main() {
	float n[10], t;
	for (int i = 0; i < 10; i++)
		scanf_s("%f", &n[i]);
	int j;
	for (int i = 0; i < 10; i++)

	{

		for (j = i + 1; j < 10; j++) {

			if (n[i] < n[j]) {

				t = n[i];
				n[i] = n[j];
				n[j] = t;
			}
		}
	}
	float avg;
	float sum = 0.0;
	for (int i = 1; i < 9; i++) {
		sum = sum+ n[i];
		
	}
	avg = sum / 8;
	printf("%.3f %.3f %.3f", n[0], n[9], avg);
	return 0;
}