#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	float preco, custo = 0, imposto = 0, preco_final;
	char refrigeracao, categoria;
	int i = 1;

	do {
		printf("\n============================");
		printf("\nProduto %d", i);
		printf("\n============================");

		printf("\nDigite o preço unitário: ");
		scanf("%f", &preco);

		printf("Digite se esse produto precisa de refrigeração (S para SIM, N para NÃO): ");
		scanf(" %c", &refrigeracao);

		printf("\nMenu de Categoria: ");
		printf("\n A - Alimentação");
		printf("\n L - Limpeza");
		printf("\n V - Vestuário");

		printf("\nDigite a categoria do produto: ");
		scanf(" %c", &categoria);

		if (preco < 20) {
			if (categoria == 'A' || categoria == 'a') {
				custo = 2;
			} else if (categoria == 'L' || categoria == 'l') {
				custo = 3;
			} else if (categoria == 'V' || categoria == 'v') {
				custo = 4;
			}
		} else if (preco >= 20 && preco <= 50) {
			if (refrigeracao == 'S' || refrigeracao == 's') {
				custo = 6;
			} else {
				custo = 0;
			}
		} else {
			if (refrigeracao == 'S' || refrigeracao == 's') {
				if (categoria == 'A' || categoria == 'a') {
					custo = 5;
				} else if (categoria == 'L' || categoria == 'l') {
					custo = 2;
				} else if (categoria == 'V' || categoria == 'v') {
					custo = 4;
				}
			} else {
				if (categoria == 'L' || categoria == 'l') {
					custo = 1;
				} else {
					custo = 0;
				}
			}
		}

		if (preco < 25) {
			imposto = preco * 0.05;
		} else {
			imposto = preco * 0.08;
		}

		preco_final = preco + custo + imposto;

		if (preco_final <= 20) {
			printf("Classificação: Barato");
		} else if (preco_final <= 100) {
			printf("Classificação: Normal");
		} else {
			printf("Classificação: Caro");
		}

		printf("\nCusto de Estocagem: R$ %.2f", custo);
		printf("\nImposto: R$ %.2f", imposto);
		printf("\nPreço Final: R$ %.2f", preco_final);
		i++;

	} while (i <= 12);
	
	printf("Rafael de Almeida de Magalhães");

}
