#include<stdio.h>

int main() {

    int num;
    int f[100];
    int i = 0, j;
    scanf("%d", &num);
    do {
        f[i] = num % 2;
        num = num / 2;
        i++;
    } while (num > 0);

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", f[j]);
    }
}