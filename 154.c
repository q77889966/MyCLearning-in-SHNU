#include <stdio.h>
int main() {
	char ch1[100];
	char ch2[100];
	int i;

	fgets(ch1, 10, stdin);
	fgets(ch2, 10, stdin);

	/*char ch;
	for (int i = 0;; ++i) {
		ch = getchar();
		if (ch == '\n') {
			ch1[i] = '\0';
			break;
		}
		ch1[i] = ch;
	}

	for (int i = 0;; ++i) {
		ch = getchar();
		if (ch == '\n') {
			ch2[i] = '\0';
			break;
		}
		ch2[i] = ch;
	}*/                        //±»fgetsÌæ´ú

	int temp=0;

	for (i = 0; i <= 10; i++) {

		if (ch1[i] > ch2[i]) {
			temp = temp + 1;
		}

		else if (ch1[i] < ch2[i]) {
			temp = temp - 1;
		}
		if ((temp == 1)||(temp==-1)||(ch1[i]=='\0')||(ch2[i]=='\0')) {
			break;
		}
	}
	printf("%d", temp);
}