#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa (utilizando o comando "switch") que indique o número de dias existentes em um mês (fevereiro = 28 dias)*/

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf ("Digite o nº mês (1-12): ");
	scanf ("%d", &mes);
	
	switch (mes) {
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:  printf ("O mês %d tem 31 dias", mes); break;
		case 4:
		case 6:
		case 9:
		case 11: printf ("O mês %d tem 30 dias", mes); break;
		case 2: printf ("O mês %d tem 28 dias", mes);
		
	}

}