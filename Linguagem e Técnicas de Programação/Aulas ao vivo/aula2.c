#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float produto;
    printf("Digite o valor do produto:");
    scanf("%f", &produto);
    printf("O valor do produto sem desconto é:%.2f\n", produto);
    float desconto = produto * 1.09;
    printf("Valor do produto com o desconto de 9%%: %.2f.", desconto);
    return 0;
}