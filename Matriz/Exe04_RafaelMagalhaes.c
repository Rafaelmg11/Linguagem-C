#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "Portuguese");
    int estoque[5][3];
    int i, ix, iy;
    int somaArmazem[4] = {0,0,0,0};
    int maiorEstoqueProduto2 = 0;
    int armazemMaiorEstoqueProduto2 = 0;
    int menorEstoque = 9999;
    int armazemMenorEstoque = 0;
    float custoProduto[3];
    float custoTotalProduto[3] = {0,0,0};
    float custoTotalArmazem[4] = {0,0,0,0};
    char nomeProduto[3][30];

    // Cadastro dos nomes dos produtos
    printf("\nDigite o nome dos produtos:\n");
    for (ix=0; ix<3; ix++){
        printf("Produto %d: ", ix+1);
        scanf("%s", nomeProduto[ix]);
    }

    // Estoque em cada armazém
    for (i=0; i<4; i++){
        printf("\nArmazém %d:\n", i+1);
        for (ix=0; ix<3; ix++){
            printf("Digite o estoque do produto %s: ", nomeProduto[ix]);
            scanf("%d", &estoque[i][ix]);
        }
    }

    // Custos dos produtos
    printf("\nDigite o custo de cada produto:\n");
    for (ix=0; ix<3; ix++){
        printf("Custo do produto %s: R$ ", nomeProduto[ix]);
        scanf("%f", &custoProduto[ix]);
    }

    // a) Total de itens em cada armazém
    for (i=0; i<4; i++){
        for (ix=0; ix<3; ix++){
            somaArmazem[i] += estoque[i][ix];
        }
        printf("\nTotal de itens no Armazém %d: %d", i+1, somaArmazem[i]);
    }

    // b) Armazém com maior estoque do produto 2
    for (i=0; i<4; i++){
        if (estoque[i][1] > maiorEstoqueProduto2){
            maiorEstoqueProduto2 = estoque[i][1];
            armazemMaiorEstoqueProduto2 = i+1;
        }
    }
    printf("\nArmazém com maior estoque do produto 2 (%s): Armazém %d com %d unidades",
           nomeProduto[1], armazemMaiorEstoqueProduto2, maiorEstoqueProduto2);

    // c) Armazém com menor estoque total
    for (i=0; i<4; i++){
        if (somaArmazem[i] < menorEstoque){
            menorEstoque = somaArmazem[i];
            armazemMenorEstoque = i+1;
        }
    }
    printf("\nArmazém com menor estoque: Armazém %d com %d unidades",
           armazemMenorEstoque, menorEstoque);

    // d) Custo total de cada produto
    for (ix=0; ix<3; ix++){
        for (i=0; i<4; i++){
            custoTotalProduto[ix] += estoque[i][ix] * custoProduto[ix];
        }
        printf("\nCusto total do produto %s: R$ %.2f", nomeProduto[ix], custoTotalProduto[ix]);
    }

    // e) Custo total de cada armazém
    for (i=0; i<4; i++){
        for (ix=0; ix<3; ix++){
            custoTotalArmazem[i] += estoque[i][ix] * custoProduto[ix];
        }
        printf("\nCusto total do Armazém %d: R$ %.2f", i+1, custoTotalArmazem[i]);
    }
    
    printf("\n\nRafael de Almeida de Magalhães\n");
}
