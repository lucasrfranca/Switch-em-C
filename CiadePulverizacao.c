#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A Companhia de Pulverização Tabajara Ltda executa pulverização de lavouras. Os custos de 
pulverização dependem do tipo da praga e da área da região que deve ser pulverizada, conforme 
a seguinte tabela:


1 = Ervas daninhas = R$ 10,00
2 = Gafanhotos = R$ 20,00
3 = Broca = R$ 30,00
4 = Outro = R$ 25,00

Faça um programa em C que receba o código, o total de área a ser pulverizada e calcule o valor 
total que deverá ser pago.

OBS: Utilizar a estrutura switch para cada código. */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cd;
	float area;
	
	printf ("Digite o código da praga: ");
    scanf ("%d", &cd);
	
	printf ("Digite o total da área a ser pulverizada em metros: ");
	scanf ("%f", &area);
	
	switch (cd) {
		
		case 1: printf ("Valor total: $%.2f", area*10); break;
		case 2: printf ("Valor total: $%.2f", area*20); break;
		case 3: printf ("Valor total: $%.2f", area*30); break;
		case 4: printf ("Valor total: $%.2f", area*25); break;
		default: printf ("Opção inválida");
		
	}	
}