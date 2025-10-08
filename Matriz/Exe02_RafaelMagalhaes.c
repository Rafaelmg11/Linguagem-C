// Faça um programa que preencha:
// - Um vetor com 8 posições contendo nome de lojas;
// - Outro vetor com quatro posições com nomes de produtos;
// - Uma matriz com os preçõs de todos os produtos em cada loja.
// O programa deve mostrar todas as relações (nome do produto - nome da loja) em que o preço nao ultrapasse R$ 60,00.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "Portuguese");
    char *lojas[8][80];
    char *produtos[4][80];
    int i,ix,iy;
    float precos[8][4];


    for (i=0; i<8; i++){
        printf("\nDigite o nome da loja %d: ", i+1);
        scanf(" %s", &lojas[i]);
    }
    
    for (i=0; i<4; i++){
        printf("Digite o nome do produto %d das lojas: ", i+1);
        scanf(" %s", &produtos[i]);
	}
	
	for (i=0; i<8; i++){
		for (ix=0; ix<4; ix++){
            printf("\nDigite o preço do produto %s na Loja %s: ", produtos[ix], lojas[i]);
            scanf("%f", &precos[i][ix]);			
		}
	}	

    printf("\n------------------");
    printf("\nProdutos das Lojas com preço até R$ 60,00:");
    for (i = 0; i<8; i++){
    	for (ix=0;ix<4;ix++){
    		if (precos[i][ix] <=60.00){
            	printf("\n %s - %s: R$ %2.f", lojas[i], produtos[ix], precos[i][ix]);
        	}
		}
    }
    
    printf("Rafael de Almeida de Magalhaes");
} 