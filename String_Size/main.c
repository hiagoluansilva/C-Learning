#include <stdio.h>

int tamStr(char *ori)
{
    int size = 0;

    while (*ori != '\0')
    {
        size++;
        ori++;
    };

    return size;
}

int main(int argc, char const *argv[])
{
    char str[10] = "Ana";
    
    printf("O tamanho de %s eh %d", str, tamStr(&str));

    return 0;
}
