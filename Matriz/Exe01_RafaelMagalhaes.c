// Faça um programa que preencha uma matriz M (2x2), calcule e mostre a matriz R, resultante da multiplicaçaõ dos elementos M pelo seu maior elemento

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int M[2][2], R[2][2], lin, col, maior;

    // Preenchendo a matriz M
    for (lin = 0; lin < 2; lin++){
        for (col = 0; col <2; col++){
            printf("\nDigite o valor para a posiçaõ [%d][%d]: ", lin+1, col+1);
            scanf("%d", &M[lin][col]);
        }
    }

    //Demonstrando a matriz M
    printf("\n------------------");
    printf("\nMatriz M:");
    for (lin = 0; lin < 2; lin++){
        printf("\n");
        for (col = 0; col <2; col++){
            printf("%d ", M[lin][col]);
        }
    }
    printf("\n------------------");

    //Encontrando o maior elemento da matriz M
    maior = M[0][0];
    for (lin = 0; lin < 2; lin++){
        for (col = 0; col < 2; col++){
            if (M[lin][col] > maior){
                maior = M[lin][col];
            }
        }
    }

    //Calculando a matriz R
    for (lin = 0; lin<2; lin++){
        for (col = 0; col<2; col++){
            R[lin][col] = M[lin][col] * maior;
        }
    }

    //Demonstrando a matriz M
    printf("\n------------------");
    printf("\nMatriz resultante multiplacado pelo maior elemento da matriz M (%d)" , maior);
    printf("\nMatriz R:");
    for (lin = 0; lin < 2; lin++){
        printf("\n");
        for (col = 0; col <2; col++){
            printf("%d ", R[lin][col]);
        }
    }

}
