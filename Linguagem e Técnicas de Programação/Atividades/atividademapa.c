#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura para armazenar os dados do atendimento
struct Atendimento {
    char nome[50];
    char cpf[15];
    int tipoAtendimento;
};

// Declaração de funções
void solicitarAtendimento(struct Atendimento atendimentos[], int *contador);
void listarAtendimentos(struct Atendimento atendimentos[], int contador);
void listarAtendimentoPorSetor(struct Atendimento atendimentos[], int contador, int tipoAtendimento);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Inicialização do array de atendimentos
    struct Atendimento atendimentos[100];
    int contadorAtendimentos = 0;

    int opcao;
    do {
        // Exibição do menu
        printf("Bem-vindo ao sistema de atendimento\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
        printf("3 - Listar Atendimento por Setor\n");
        printf("4 - Sair\n");

        // Leitura da opção do usuário
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                solicitarAtendimento(atendimentos, &contadorAtendimentos);
                break;
            case 2:
                listarAtendimentos(atendimentos, contadorAtendimentos);
                break;
            case 3:
                printf("Informe o tipo de atendimento (1 a 4): ");
                int tipoAtendimento;
                scanf("%d", &tipoAtendimento);
                listarAtendimentoPorSetor(atendimentos, contadorAtendimentos, tipoAtendimento);
                break;
            case 4:
                printf("Saindo do sistema. Obrigado!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        // Limpar o buffer do teclado
        fflush(stdin);

        // Pausa o sistema antes de mostrar o menu novamente
        system("pause");
        // Limpar a tela
        system("cls");

    } while (opcao != 4);

    return 0;
}

// Função para solicitar um novo atendimento
void solicitarAtendimento(struct Atendimento atendimentos[], int *contador) {
    printf("Informe o nome: ");
    scanf("%s", atendimentos[*contador].nome);
    printf("Informe o CPF: ");
    scanf("%s", atendimentos[*contador].cpf);
    printf("Informe o tipo de atendimento (1 a 4):\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    scanf("%d", &atendimentos[*contador].tipoAtendimento);
    (*contador)++;
}

// Função para listar todos os atendimentos registrados
void listarAtendimentos(struct Atendimento atendimentos[], int contador) {
    for (int i = 0; i < contador; i++) {
        printf("Nome: %s\n", atendimentos[i].nome);
        printf("CPF: %s\n", atendimentos[i].cpf);
        printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);
        switch (atendimentos[i].tipoAtendimento) {
            case 1:
                printf("Abertura de Conta\n");
                break;
            case 2:
                printf("Caixa\n");
                break;
            case 3:
                printf("Gerente Pessoa Física\n");
                break;
            case 4:
                printf("Gerente Pessoa Jurídica\n");
                break;
            default:
                printf("Tipo de atendimento desconhecido\n");
        }
        printf("===============================\n");
    }
}

// Função para listar atendimentos por tipo de atendimento
void listarAtendimentoPorSetor(struct Atendimento atendimentos[], int contador, int tipoAtendimento) {
    for (int i = 0; i < contador; i++) {
        if (atendimentos[i].tipoAtendimento == tipoAtendimento) {
            printf("Nome: %s\n", atendimentos[i].nome);
            printf("CPF: %s\n", atendimentos[i].cpf);
            printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);
            switch (atendimentos[i].tipoAtendimento) {
                case 1:
                    printf("Abertura de Conta\n");
                    break;
                case 2:
                    printf("Caixa\n");
                    break;
                case 3:
                    printf("Gerente Pessoa Física\n");
                    break;
                case 4:
                    printf("Gerente Pessoa Jurídica\n");
                    break;
                default:
                    printf("Tipo de atendimento desconhecido\n");
            }
            printf("===============================\n");
        }
    }
}
