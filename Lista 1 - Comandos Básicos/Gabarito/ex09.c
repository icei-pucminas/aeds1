#include <stdio.h>
#include <math.h> // Biblioteca para funcoes matematicas , como pow ()

 int main () {
    double a1 , r , quinto ; // a1 = primeiro termo , r = razao , quinto =quinto termo

    // Solicita ao usuario o primeiro termo e a razão da PG
    printf (" Digite o primeiro termo da PG: ") ;
    scanf ("%lf", & a1 ) ;
    printf (" Digite a razao da PG: ") ;
    scanf ("%lf", & r ) ;

    // Calcula o quinto termo da PG: a_n = a1 * r^(n -1)
    quinto = a1 * pow (r , 5 - 1) ;

    // Exibe o resultado
    printf ("O quinto termo da PG e: %.2 lf\n", quinto ) ;

    return 0; // Finaliza o programa
 }