/*
    Escrever um programa que declare duas variáveis
    chamadas peso e altura. Solicite ao usuário que digite seu
    peso em quilos e sua altura em metros. Mostre na tela o
    peso do usuário em quilos e também em gramas, além da
    altura dele em metros e em centímetros.
    Obs: lembrando que, por exemplo, 64.52Kg é igual a 64520g e
    1.68m é igual a 168cm.
*/

int main(int argc, char const *argv[])
{
    float peso = 0, altura = 0;

    printf("Informe seu peso (Kg): \n");
    scanf("%f", &peso);

    printf("Informe sua altura (m): \n");
    scanf("%f", &altura);

    printf("Peso: %.2fKg ou %.2fg \n", peso, peso*1000);
    
    printf("Altura: %.2fm ou %.2fcm", altura, altura*100);

    return 0;
}
