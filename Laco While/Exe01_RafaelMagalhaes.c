//Faça um programa que no momento de preencher um vetor de 8 números inteiros ixpa os armazene de forma crescente (vetor, while e for)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[8], i=0, ix, num;

    while(i<8){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
        i++;
    }

    for(i=0; i<8; i++){
        for(ix=i+1; ix<8; ix++){
            if(vetor[i] > vetor[ix]){
                num = vetor[i];
                vetor[i] = vetor[ix];
                vetor[ix] = num;
            }
        }
    }

    printf("\nNúmeros em ordem crescente:\n");
    for(i=0; i<8; i++){
        printf("%d ", vetor[i]);
    }
    
}