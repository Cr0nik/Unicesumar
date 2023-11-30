#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma = 0;
    
    for (size_t i = 1; i <= 10; i++)
    {
        soma = soma + i;
    }

    printf("%d", soma);

    return EXIT_SUCCESS;
}