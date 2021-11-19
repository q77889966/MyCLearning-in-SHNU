#include <stdio.h>
int main() {
	char ch[100];
	fgets(ch, 100, stdin);
	int i;
	int j = 0;

	for (i = 0; i < 100; i++) {
		if (ch[i] != '\0') {
			j++;
		}
		else {
			break;
		}
	}
	printf("%d", j);
}