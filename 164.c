#include <stdio.h>
int main() {
	char ch[100];
	fgets(ch, 100, stdin);
	puts(ch);
	return 0;
}