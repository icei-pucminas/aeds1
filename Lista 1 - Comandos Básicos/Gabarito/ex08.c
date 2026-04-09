#include <stdio.h>

 int main () {
    double a1 , r , decimo ; // a1 = primeiro termo , r = razão , decimo = decimo termo

    // Solicita ao usuario o primeiro termo e a razão da PA
    printf (" Digite o primeiro termo da PA: ") ;
    scanf ("%lf", & a1 ) ;
    printf (" Digite a razao da PA: ") ;
    scanf ("%lf", & r ) ;

    // Calcula o decimo termo da PA: a_n = a1 + (n -1) *r
    decimo = a1 + (10 - 1) * r ;

    // Exibe o resultado
    printf ("O decimo termo da PA e: %.2 lf\n", decimo ) ;

    return 0; // Finaliza o programa
 }