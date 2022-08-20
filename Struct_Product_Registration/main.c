/*
    Desenvolva um programa, no qual � necess�rio armazenar o
    produto de uma loja de esporte. O produto tem as seguintes
    caracter�sticas: c�digo (inteiro), descricao (texto), preco
    (float), promocao (sim ou n�o).
    Para isso, crie um tipo struct chamado TipoProduto para
    guardar todos os campos de um produto.
    Crie uma vari�vel denominada produto do tipo TipoProduto.
    Solicite ao usu�rio que cadastre os valores na vari�vel
    produto.
    Mostre na tela os valores cadastrados pelo usu�rio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct 
{
    int cod;
    char desc[50];
    float preco;
    char promo;

}TipoProduto; 

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    int qtd = 0, i = 0;

    printf("Cadastro de Produtos: \n");
    printf("Quantos produtos ser�o cadastrados? \n");
    scanf("%d", &qtd);
    
    TipoProduto produto[qtd];

    for (i = 0; i < qtd; i++)
    {
        
        printf("Informe o c�digo do produto %d:\n", i+1);
        scanf("%d", &produto[i].cod);

        printf("Informe a descri��o do produto %d:\n", i+1);
        fflush(stdin);
        scanf("%[^\n]", &produto[i].desc);

        printf("Informe o pre�o do produto %d:\n", i+1);
        scanf("%f", &produto[i].preco);

        printf("O produto %d est� em promo��o ? (S/N) :\n", i+1);
        fflush(stdin);
        scanf("%[^\n]", &produto[i].promo);
     
    };

    i = 0;

    printf("\nCadastros realizados: \n");

    for (i = 0; i < qtd; i++)
    {
        

        printf("Cadastro %d: \n", i+1);
        printf("C�digo: %d \n", produto[i].cod);
        printf("Descri��o: %s \n", produto[i].desc);
        printf("Pre�o: R$%.2f \n", produto[i].preco);
        printf("Promo��o? %c\n\n", produto[i].promo);
    };
    
    

    return 0;
}
