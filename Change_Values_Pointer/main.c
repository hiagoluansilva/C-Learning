#include <stdio.h>

void troca(int *a, int *b)
{
    int var1 = *a, var2 = *b;

    *a = var2;
    *b = var1;
}

int main(int argc, char const *argv[])
{
    int a, b;

    a = 8;
    b = 9;

    printf("%d - %d\n", a, b);

    troca(&a, &b);

    printf("%d - %d\n", a, b);

    return 0;
}
