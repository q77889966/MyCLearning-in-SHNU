#include <stdio.h>
int main() {
	char ch[100];
	char del[100];

	fgets(ch, 100, stdin);

	fgets(del, 100, stdin);

	int i,j;
	for (i = 0; i <= 100; i++) {

		if (ch[i] == del[0]) {

			for (j = i; j <= 100; j++) {

				if (ch[j] != '\0') {
					ch[j] = ch[j + 1];
				}

			}

		}

		if (ch[i] == del[0]) {
			i = i - 1;
		}

		if (ch[i] == '\0') {
			break;
		}
	}
	puts(ch);
}