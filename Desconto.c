#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes Vips. Faça um 
programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor total 
da compra efetuada e um código que identifique se o comprador é um cliente comum, funcionário 
ou vip.


Cliente Comum = 1 = Sem desconto
Cliente Vip = 2 = 5% de desconto
Funcionário = 3 = 10% de desconto

OBS: Utilizar a estrutura switch para cada código */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float compra;
	int cd, vip, fun;
	
	printf ("Digite o valor total da compra: $");
	scanf ("%f", &compra);
	
	printf ("Digite o seu código: ");
	scanf ("%d", &cd);
	
	vip =  compra*0.05;
	fun = compra*0.10;
	
	switch (cd) {
		
		case 1: printf ("O valor total a ser pago é: $%.2f", compra); break;
		case 2: printf ("O valor total a ser pago é: $%.2f", compra-vip); break;
		case 3: printf ("O valor total a ser pago é: $%.2f", compra-fun); break;
		default: printf ("Código inválido");
		
	}

}