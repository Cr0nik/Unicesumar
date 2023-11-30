#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int qtdavaliacoes;
    float total = 0.0;
    int i;
    float nota;
    float media;

    printf("Digite a quantidade de avaliações:\n");
    fflush(stdin);
    scanf("%d", &qtdavaliacoes);

    for (i = 1; i < qtdavaliacoes; i++)
    {
        printf("Digite a nota da %d avaliação:", i);
        fflush(stdin);
        scanf("%f", &nota);
        total = total + nota;
    }
    
    media = total /qtdavaliacoes;

    if (media >= 6)
    {
        printf("Você foi aprovado!!");
    }
    else if (media <= 6 && media >= 4)
    {
        printf("Recuperação!!");
    }
    else
    {
        printf("Reprovado!!");
    }
    return EXIT_SUCCESS;
}