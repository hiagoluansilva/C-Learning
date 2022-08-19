/*
    Imprimir uma listagem de todos os caracteres ASCII,exibindo seu código e o caractere específico.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 128

int main()
{
    int i = 0;
    for ( i = 0; i < SIZE; i++)
    {
        printf("%c", i);
    };
    
    return 0;
}
