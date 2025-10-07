#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario = 1000;
	float aumento = 1.5;
	int ano, i=2022;
	
	salario = salario + salario*1.5/100; //2021
	
	printf("\nDigite o ano em que você deseja saber o salario: ");
	scanf("%d", &ano);
	
	if (ano>=2022){
		do{
			aumento = aumento*2;
			salario = salario + salario*aumento/100;
			i++;
		}
		while(i<=ano);
		printf("\nO salario de %d vai ser de: %.2f ", ano,salario);
	
	}else if (ano<2020){
		printf("\nData Inválida!\nSó é permitido anos apartir de 2022(inclusive)\nEncerrando o Sistema...");
	}
		
	
	printf("\nRafael de Almeida de Magalhães");
	
	
}