#include <stdio.h>

void cp(char *ori, char *dest)
{
    while (*ori != '\0')
    {
        *dest = *ori;
        ori++;
        dest++;
    };
    *dest = '\0';
}

int main(int argc, char const *argv[])
{
    char ori[10] = "Ana";
    char dest[10];
    
    cp(&ori, &dest);
    
    printf("%s - %s", ori, dest);

    return 0;
}
