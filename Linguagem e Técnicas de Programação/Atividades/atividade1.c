#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    float valorInvestido;
    int periodoMeses;
    float percentualRendimento;
    float saldoFinal;
    float imposto = 0.15;

    printf("Digite o valor investido: R$");
    scanf("%f", &valorInvestido);

    printf("Digite a quantidade de meses investidos: ");
    scanf("%d", &periodoMeses);

    printf("Digite o percentual de rendimento por mês (em decimal, ex: 1%% = 0.01): ");
    scanf("%f", &percentualRendimento);

    saldoFinal = valorInvestido;
    for (int i = 0; i < periodoMeses; i++) {
        saldoFinal += saldoFinal * percentualRendimento;
    }

    float lucro = saldoFinal - valorInvestido;
    float valorImposto = lucro * imposto;

    saldoFinal -= valorImposto;

    printf("Valor Saldo Final: R$%.2f\n", saldoFinal);

    return 0;
}
