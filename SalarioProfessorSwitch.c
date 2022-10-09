#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma escola faz o pagamento de seus professores por hora/aula. Faça um programa em C que 
calcule e receba o nível, o nome do professor, a quantidade de horas ministradas, e exiba o 
seu salário. Sabe-se que o valor da hora/aula segue a tabela abaixo: 

Professor Nível 1 R$ 20,00 por hora/aula
Professor Nível 2 R$ 25,00 por hora/aula
Professor Nível 3 R$ 55,00 por hora/aula

OBS: Utilize a estrutura switch para cada nível de professor.
 */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int nivel, horas;
	char nome[40];
	float sal1, sal2, sal3;

	printf ("Digite o nome do professor: ");
    gets (nome);
	
	printf ("Digite o nível do professor: ");
	scanf ("%d", &nivel);

	printf ("Digite a quantidade de horas ministradas: ");
	scanf ("%d", &horas);
	
	sal1 = horas*20;
	sal2 = horas*25;
	sal3 = horas*55;
	
	switch (nivel) {
		
		case 1: printf ("O salário do professor é = %.2f", sal1); break;
		case 2: printf ("O salário do professor é = %.2f", sal2); break;
		case 3: printf ("O salário do professor é = %.2f", sal3); break;
		default: printf ("Opção inválida");
		
	}
	
}