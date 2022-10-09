#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa na linguagem C que retorne o nome de um produto a partir do código do
mesmo. Considere os seguintes códigos:

A -> Parafuso
B -> Porca
C -> Prego
Outra Letra -> Diversos

OBS: Utilizar a estrutura switch para cada código */

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	char cd;
	
	printf ("Digite o código do produto: ");
	scanf ("%c", &cd);
	
	switch (cd) {
		
		case 'a':
		case 'A': printf ("Parafuso"); break;
		case 'b':
		case 'B': printf ("Porca"); break;
		case 'c':
		case 'C': printf ("Prego"); break;
		default: printf ("Diversos");
		
	}
	
}