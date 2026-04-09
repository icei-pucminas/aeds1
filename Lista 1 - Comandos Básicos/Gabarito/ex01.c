#include <stdio.h>

 int main () {

 	int numero , centena , dezena , unidade ;
 	int invertido ;

 	printf (" Digite um numero inteiro de tres digitos : ");
	scanf ("%d", & numero ) ;

 	// separando os dígitos
	centena = numero / 100; // pega o primeiro dígito
 	dezena = ( numero / 10) % 10; // pega o segundo dígito
 	unidade = numero % 10; // pega o terceiro dígito

 	// formando o número invertido ( UDC )
 	invertido = unidade * 100 + dezena * 10 + centena ;

 	printf (" Numero invertido : %d\n", invertido ) ;
	return 0;
}