#include <stdio.h>

int main(void)
{
    int a = 1, b = 1, i;
    int sum = 0;

    for (i = 1; i < 20; i++) {
        int t = a;
        a = b;
        sum = sum + b;
        b += t;
        
    }
    printf("%d", sum+1);
    return 0;
}