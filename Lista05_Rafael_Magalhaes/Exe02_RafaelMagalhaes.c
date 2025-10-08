#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i=1;
	float nota1,nota2,media;
	int aprovados=0, reprovados=0, exames=0;
	
	do{
		printf("\n---------------------------");
		printf("\nDigite a primeira nota: ");
		scanf("%f", &nota1);
		
		printf("\nDigite a segunda nota: ");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2)/2;
		
		printf("\nMédia do Aluno: %0.2f", media);
		
		if (media<3){
			printf("\nAluno Reprovado!");
			reprovados++;
		}else if (media>=3 && media <=7){
			printf("\nAluno em Exame!");
			exames++;
		} else if (media>7 && media <=10){
			printf("\nAluno Aprovado!");
			aprovados++;
		}else{
			printf("\nNota Inválida!\nEcerrando o Sistema...");
			exit(0);
		}
		
		i++;
	
	}
	while (i<=6);
	
	printf("\n---------------------------");
	printf("\nTotal de alunos Aprovados: %d", aprovados);
	printf("\nTotal de alunos Reprovados: %d", reprovados);
	printf("\nTotal de alunos em Exame: %d", exames);
	printf("\nRafael de Almeida de Magalhães");
	
	
}