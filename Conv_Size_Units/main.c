/*
    Sabe-se que um arquivo de som, no formato mp3
    comprime o som original em até 12 vezes. Pergunte ao
    usuário, qual o tamanho (em MB) de seu arquivo de som
    predileto, considerando que ele sofreu o máximo de
    compressão (12 vezes). Responda qual o tamanho do
    arquivo original em MB? KB? B? GB? TB? Mostre os
    valores em seu formato normal e em seu formato
    exponencial.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

float size = 0;

    printf("Qual o tamanho (em MB) de seu arquivo de som predileto ?\n");
    scanf("%f", &size);

    printf("Tamanho original do arquivo por Unidade: \n");
    printf("%.2f MB - %e MB \n", size*12, size*12);
    printf("%.2f KB - %e KB \n", size*12*1024, size*12*1024);
    printf("%.2f B - %e B \n", size*12*1024*1024, size*12*1024*1024);
    printf("%.4f GB - %e GB \n", size*12/1024, size*12/1024);
    printf("%.8f TB - %e TB \n", size*12/1024/1024, size*12/1024/1024);

    return 0;
}
