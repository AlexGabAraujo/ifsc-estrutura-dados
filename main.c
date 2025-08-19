#include <stdio.h>
#include "retangulo.c"

int main() {
    int opcao;
    do {
        printf("-------------MENU-------------\n");
        printf("Digite qual questão deseja rodar (1-3) ou 0 para sair:\n");
        scanf("%d", &opcao);
        printf("\n------------------------------\n\n");

        switch(opcao) {
            case 1: {
                Retangulo retangulo;
                float altura, base;

                printf("Digite a altura do retângulo: ");
                scanf("%f", &altura);
                printf("Digite a base do retângulo: ");
                scanf("%f", &base);

                inicializarRetangulo(&retangulo, base, altura);

                printf("\n-------Informações do Retângulo-------");
                printf("\nÁrea do retângulo: %.2f", calcularArea(&retangulo));
                printf("\nPerímetro do retângulo: %.2f\n\n", calcularPerimetro(&retangulo));

                break;
            }
            case 2:
                printf("Opção 2 em desenvolvimento...\n\n");
                break;
            case 0:
                printf("\nFinalizando...\n\n");
                break;
            default:
                printf("Valor inválido. Tente novamente.\n\n");
                break;
        }
    } while(opcao != 0);

    return 0;
}
