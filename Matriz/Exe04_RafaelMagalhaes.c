// Faça um programa que receba o estoque atual de tres produtos, armazenados em quatro armazens, e coloque esses dados em uma matriz
// 5x3. Considereando que a ultima linha dessa matriz contenha o custo de cada produto, o programa devera calcular e mostrar:
//a - a quantiade de itens cadastros em cada armazem
//b - Qual armazem possui maior estoque do produto 2
//c - Qual armazem possui o menor estoque 
//d - Qual o custo total de cada produto;
//e - Qual o custo total de cada armazem
// Devem ser considerados empates

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
    int custoTotalProduto[3] = {0,0,0};
    int custoTotalArmazem[4] = {0,0,0,0};

    for (i=0; i<4; i++){
        printf("\nArmazem %d:\n", i+1);
        for (ix=0; ix<3; ix++){
            printf("Digite o estoque do produto %d: ", ix+1);
            scanf("%d", &estoque[i][ix]);
        }
    }

    printf("\nDigite o custo de cada produto:\n");
    for (ix=0; ix<3; ix++){
        printf("Custo do produto %d: ", ix+1);
        scanf("%d", &estoque[4][ix]);
    }

    // a - a quantiade de itens cadastros em cada armazem
    for (i=0; i<4; i++){
        for (ix=0; ix<3; ix++){
            somaArmazem[i] += estoque[i][ix];
        }
        printf("\nTotal de itens no Armazem %d: %d", i+1, somaArmazem[i]);
    }

    // b - Qual armazem possui maior estoque do produto 2
    for (i=0; i<4; i++){
        if (estoque[i][1] > maiorEstoqueProduto2){
            maiorEstoqueProduto2 = estoque[i][1];
            armazemMaiorEstoqueProduto2 = i+1;
        }
    }
    printf("\nArmazem com maior estoque do produto 2: Armazem %d com %d unidades", armazemMaiorEstoqueProduto2, maiorEstoqueProduto2);

    // c - Qual armazem possui o menor estoque 
    for (i=0; i<4; i++){
        if (somaArmazem[i] < menorEstoque){
            menorEstoque = somaArmazem[i];
            armazemMenorEstoque = i+1;
        }

    }
    printf("\nArmazem com menor estoque: Armazem %d com %d unidades", armazemMenorEstoque, menorEstoque);
    // d - Qual o custo total de cada produto;
    for (ix=0; ix<3; ix++){
        for (i=0; i<4; i++){
            custoTotalProduto[ix] += estoque[i][ix] * estoque[4][ix];
        }
        printf("\nCusto total do produto %d: R$ %d", ix+1, custoTotalProduto[ix]);
    }
    // e - Qual o custo total de cada armazem
    for (i=0; i<4; i++){
        for (ix=0; ix<3; ix++){
            custoTotalArmazem[i] += estoque[i][ix] * estoque[4][ix];
        }
        printf("\nCusto total do armazem %d: R$ %d", i+1, custoTotalArmazem[i]);
    }

}
