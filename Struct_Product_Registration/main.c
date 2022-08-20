/*
    Desenvolva um programa, no qual é necessário armazenar o
    produto de uma loja de esporte. O produto tem as seguintes
    características: código (inteiro), descricao (texto), preco
    (float), promocao (sim ou não).
    Para isso, crie um tipo struct chamado TipoProduto para
    guardar todos os campos de um produto.
    Crie uma variável denominada produto do tipo TipoProduto.
    Solicite ao usuário que cadastre os valores na variável
    produto.
    Mostre na tela os valores cadastrados pelo usuário.
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
    printf("Quantos produtos serão cadastrados? \n");
    scanf("%d", &qtd);
    
    TipoProduto produto[qtd];

    for (i = 0; i < qtd; i++)
    {
        
        printf("Informe o código do produto %d:\n", i+1);
        scanf("%d", &produto[i].cod);

        printf("Informe a descrição do produto %d:\n", i+1);
        fflush(stdin);
        scanf("%[^\n]", &produto[i].desc);

        printf("Informe o preço do produto %d:\n", i+1);
        scanf("%f", &produto[i].preco);

        printf("O produto %d está em promoção ? (S/N) :\n", i+1);
        fflush(stdin);
        scanf("%[^\n]", &produto[i].promo);
     
    };

    i = 0;

    printf("\nCadastros realizados: \n");

    for (i = 0; i < qtd; i++)
    {
        printf("Cadastro %d: \n", i+1);
        printf("Código: %d \n", produto[i].cod);
        printf("Descrição: %s \n", produto[i].desc);
        printf("Preço: R$%.2f \n", produto[i].preco);
        printf("Promoção? %c\n\n", produto[i].promo);
    };
    
    

    return 0;
}
