#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3]) {
    int meta;

    // Fazer leitura de um valor de meta
    printf("Digite o valor da meta: ");
    scanf("%d", &meta);

    int total[3][3];

    // Somar os valores das duas matrizes
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            total[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    // Mostrar em formato de matriz a matriz total
    printf("Matriz Total:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", total[i][j]);
        }
        printf("\n");
    }

    // 4. Escrever na tela os setores que alcançaram a meta
    printf("\nSetores que alcançaram a meta:\n");
    int encontrouSetor = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (total[i][j] >= meta) {
                printf("Setor (%d, %d)\n", i + 1, j + 1);
                encontrouSetor = 1;
            }
        }
    }

    if (!encontrouSetor) {
        printf("Nenhum setor alcançou a meta.\n");
    }
}

int main() {
    int dia1[3][3];
    int dia2[3][3];
    int i, j = 0;

    // Leitura da matriz primeiro dia
    printf("Digite o total de pessoas para cada setor no primeiro dia:\n");
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Setor %d de %d: ", (i + 1), (j + 1));
            scanf("%d", &dia1[i][j]);
        }
    }

    // Leitura da matriz segundo dia
    printf("Digite o total de pessoas para cada setor no segundo dia:\n");
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Setor %d de %d: ", (i + 1), (j + 1));
            scanf("%d", &dia2[i][j]);
        }
    }

    validarMeta(dia1, dia2);

    printf("\nPressione qualquer tecla para fechar o programa...");
    getchar();

    return 0;
}
