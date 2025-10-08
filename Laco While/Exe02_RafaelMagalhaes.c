// Faça um programa que receba a temperatura média de cada mes do ano, amarzenando-as em um vetor. Verifque e mostre a maior e menor temperatura do ano e em que mes ocorreram (mostrar o mes por extenso: 1 - Janeiro, 2 - Fevereiro...) desconsidere empate;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float temp[12], maior, menor;
    int i, imaior, imenor;
    char *meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    for(i=0; i<12; i++){
        printf("Digite a temperatura média de %s: ", meses[i]);
        scanf("%f", &temp[i]);
    }

    maior = temp[0];
    menor = temp[0];
    imaior = 0;
    imenor = 0;

    for(i=1; i<12; i++){
        if(temp[i] > maior){
            maior = temp[i];
            imaior = i;
        }
        if(temp[i] < menor){
            menor = temp[i];
            imenor = i;
        }
    }

    printf("\nA maior temperatura foi %.2f°C em %s.\n", maior, meses[imaior]);
    printf("A menor temperatura foi %.2f°C em %s.\n", menor, meses[imenor]);
    
}