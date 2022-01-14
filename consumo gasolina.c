#include <stdio.h>
int main()
{
    float a, km, valorlitro, tanque, resultado;
    char modelo[20],repetir;

        printf("Bem vindo ao calculador de consumo para veiculos\n");
    do{    
        printf("Digite o modelo do carro:\n");
        fgets(modelo, 20, stdin);
        printf("Quantos Reais voce abasteceu?\n");
        scanf("%f", &a);
        printf("Qual o valor do litro da gasolina?\n");
        scanf("%f", &valorlitro);
        printf("Quantos Km voce andou com esse valor?\n");
        scanf("%f", &km);
            tanque = a/valorlitro;
            resultado = km/tanque;
    printf("Seu consumo foi de: %.2f", resultado);
    printf("Km/l no veiculo %s", modelo);
    printf("Deseja realizar novo calculo? s/n:");
    scanf(" %c", &repetir);
    fflush(stdin);

}while(repetir == 's');

}