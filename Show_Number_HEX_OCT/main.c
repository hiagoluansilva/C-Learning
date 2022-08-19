/*
    Solicitar ao usuário um número qualquer e mostrar o
    valor correspondente nas bases octal e hexadecimal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Informe um numero \n");

    scanf("%d", &num);

    printf("Numero informado %d, em HEX %x, em OCT %o", num, num, num);

    return 0;
}
