#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Utilize a estrutura switch para fazer um programa na linguagem C que dada a letra de um nadador 
classifica-o em uma das seguintes categorias: 

I Infantil
J Juvenil
A Adulto */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf ("Digite a letra do nadador: ");
	scanf ("%c", &letra);
	
	switch (letra) {
		
		case 'i':
		case 'I': printf ("Nadador pertence a categoria Infantil"); break;
		case 'j':
		case 'J': printf ("Nadador pertence a categoria Juvenil"); break;
		case 'a':
		case 'A': printf ("Nadador pertence a categoria Adulto"); break;
		default: printf ("Opção inválida");
		
	}
	
}