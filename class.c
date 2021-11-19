#include <stdio.h>
int main() {
	int m = 300;
	float fx = 300.600006;
	char cht = 'z';
	printf("%p %p %p\n", &m, &fx, &cht);

	int* ptr = &m;
	printf("%d\n", *ptr);
	float* ptr2 = &fx;
	printf("%f\n", *ptr2);
	char* ptr3 = &cht;
	printf("%c\n", *ptr3);


}