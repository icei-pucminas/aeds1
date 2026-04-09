#include <stdio.h>
#include <math.h> // Biblioteca para funcoes matematicas

 int main () {
    double a , b , c , y ; // Variaveis para os numeros reais e o resultado y

    // Solicita ao usuario os valores de a, b e c
    printf (" Digite o valor de a: ") ;
    scanf ("%lf", & a ) ;
    printf (" Digite o valor de b: ") ;
    scanf ("%lf", & b ) ;
    printf (" Digite o valor de c: ") ;
    scanf ("%lf", & c ) ;

    // Calcula y usando a formula dada
    y = a + ( b / ( c + a ) ) + 2 * ( a - b ) + ( log (64) / log (2) ) ; //log2 (64) = log (64) / log (2)

    // Exibe o resultado
    printf ("O valor de y e: %.2 lf\n", y ) ;

    return 0; // Finaliza o programa
 }