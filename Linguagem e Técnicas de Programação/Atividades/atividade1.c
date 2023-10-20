#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");

    float valorInvestido = 0 ;
    int periodo = 0;
    float percentualRendimento = 0;
    float juros;
    float porcentagem;

    printf("Digite o valor investido:");
    scanf("%f", &valorInvestido);
    printf("Digite a quantidade de meses investidos:");
    scanf("%d", &periodo);
    printf("Digite o percentual de rendimento:");
    scanf("%f", &percentualRendimento);
    porcentagem = percentualRendimento / 100;

    for (size_t i = 1; i <= periodo; i++)
    {
        juros = valorInvestido * pow(1 + porcentagem, i);
        printf("Depois do %d mes tera =%.2f\n", i, juros);
    }
    return 0;
}