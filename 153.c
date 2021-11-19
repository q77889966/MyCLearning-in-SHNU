#include <stdio.h>
int main() {
    char a[20];

    int i;

    for (i = 0;i<11; i++)
    {
        scanf("%c", &a[i]);

    }
    a[i] = '\0';
    puts(a);
    return 0;
}