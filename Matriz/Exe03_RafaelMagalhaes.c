// Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, o programa devera distribuir esses elementos em 
// uma matriz 3X6 e no final mostrar a matriz gerada

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "Portuguese");
    int vet[18];
    int matriz [3][6];
    int i, ix, iy;

    for (i=0; i<18; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vet[i]);
    }

    i = 0;
    for (ix=0; ix<3; ix++){
        for (iy=0; iy<6; iy++){
            matriz [ix][iy] = vet[i];
            i++;
        }
    }

    printf("\nMatriz 3x6: \n");
    for (ix=0; ix<3; ix++){
        for (iy=0; iy<6; iy++){
            printf("%d ", matriz[ix][iy]);
        }
        printf("\n");
    }
}