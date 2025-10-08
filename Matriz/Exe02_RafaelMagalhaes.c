// Faça um programa que preencha:
// - Um vetor com 3 posições contendo nome de lojas;
// - Outro vetor com quatro posições com nomes de produtos;
// - Uma matriz com os preçõs de todos os produtos em cada loja.
// O programa deve mostrar todas as relações (nome do produto - nome da loja) em que o preço nao ultrapasse R$ 60,00.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "Portuguese");
    char *lojas[3][80];
    char *produtos[4][80];
    int i,ix,iy;
    float precos[3][4];


    for (i=0; i<3; i++){
        printf("\nDigite o nome da loja %d: ", i+1);
        scanf(" %s", &lojas[i]);
        for (ix=0; ix<4; ix++){
            printf("Digite o nome do produto %d da loja %s: ", ix+1, lojas[i]);
            scanf(" %s", &produtos[ix]);
        }
        for (iy=0; iy<4; iy++){
            printf("\nDigite o preço do produto %s na Loja %s: ", produtos[iy], lojas[i]);
            scanf("%f", &precos[i][iy]);
        }

        printf("\n------------------");
        printf("\nProdutos das Lojas com preço até R$ 60,00:");
        for (ix = 0; ix<4; ix++){
            if (precos[i][ix] <=60.00){
                printf("\n %s - %s: R$ %2.f", lojas[i], produtos[ix], precos[i][ix]);
            }
        }
    }
}