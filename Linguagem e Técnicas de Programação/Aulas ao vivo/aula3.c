#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    printf("Qual o seu genero?\n");
    char genero;
    scanf("%c", &genero);

    if (genero == 'M' || genero == 'm')
    {
        printf("Masculino\n");
    }
    else if (genero == 'F' || genero == 'f')
    {
        printf("Feminino\n");
    }
    else
        printf("Outros\n");
    
    return EXIT_SUCCESS;
}