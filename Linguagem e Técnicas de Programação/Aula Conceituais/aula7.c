#include <stdio.h>
#include <stdlib.h>

void main(){
    float nota1;
    float nota2;
    float media;

    printf("Digite a nota da primeira prova:");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova:");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    
    if(media >= 7){
        printf("APROVADO!!");
    }
    else if (media >= 4){
        printf("SUBSTUTIVA!!");
    }
    else{
        printf("REPROVADO!!");
    }
    return EXIT_SUCCESS;
}