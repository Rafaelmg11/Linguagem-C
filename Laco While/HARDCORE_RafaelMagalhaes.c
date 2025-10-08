#include <stdio.h>

int main() {
    int codigos[10];
    float saldos[10];
    int indice, codigoDigitado, opcao;
    float valor;
    int encontrou;

    for (indice = 0; indice < 10; indice++) {
        printf("Digite o código da conta %d: ", indice + 1);
        scanf("%d", &codigos[indice]);
        printf("Digite o saldo inicial da conta %d: ", indice + 1);
        scanf("%f", &saldos[indice]);
    }

    do {
        printf("\n1 - Efetuar depósito\n");
        printf("2 - Efetuar saque\n");
        printf("3 - Consultar ativo bancário\n");
        printf("4 - Finalizar programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o código da conta para depósito: ");
                scanf("%d", &codigoDigitado);
                encontrou = 0;
                for (indice = 0; indice < 10; indice++) {
                    if (codigos[indice] == codigoDigitado) {
                        printf("Digite o valor a depositar: ");
                        scanf("%f", &valor);
                        saldos[indice] += valor;
                        encontrou = 1;
                        break;
                    }
                }
                if (!encontrou)
                    printf("Conta não encontrada\n");
                break;

            case 2:
                printf("Digite o código da conta para saque: ");
                scanf("%d", &codigoDigitado);
                encontrou = 0;
                for (indice = 0; indice < 10; indice++) {
                    if (codigos[indice] == codigoDigitado) {
                        printf("Digite o valor a sacar: ");
                        scanf("%f", &valor);
                        if (valor <= saldos[indice]) {
                            saldos[indice] -= valor;
                        } else {
                            printf("Saldo insuficiente\n");
                        }
                        encontrou = 1;
                        break;
                    }
                }
                if (!encontrou)
                    printf("Conta não encontrada\n");
                break;

            case 3:
                valor = 0;
                for (indice = 0; indice < 10; indice++) {
                    valor += saldos[indice];
                }
                printf("Ativo bancário total: %.2f\n", valor);
                break;

            case 4:
                printf("Finalizando o programa...\n");
                break;

            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 4);

    printf("\nRafael de Almeida de Magalhães");
}