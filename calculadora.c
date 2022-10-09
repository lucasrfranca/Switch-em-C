#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa em C, com a estrutura switch, que leia dois valores e dada o caractere
referente à operação execute a soma, subtração, multiplicação ou divisão.*/

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	char op;
	
	printf ("Digite o 1º valor: ");
	scanf ("%f", &n1);
	
	printf ("Digite o 2º valor: ");
	scanf ("%f", &n2);
	printf ("\n");

	printf ("  + = soma\n");
	printf ("  - = subtração\n");
	printf ("  * = multiplicação\n");
	printf ("  / = divisão\n\n");
	
	printf ("Digite o caractere referente a qual operação será feita: ");
	scanf ("%s", &op);
	printf ("\n");
	
	switch (op) {
		
		case '+': printf ("A soma dos dois valores é: %.2f", n1+n2); break;
		case '-': printf ("A subtração dos dois valores é: %.2f", n1-n2); break;
		case '*': printf ("A multiplicação dos dois valores é: %.2f", n1*n2); break;
		case '/': printf ("A divisão dos dois valores é: %.2f", n1/n2); break;
	    default: printf ("Opção inválida");
			
	}
	
}