#include <stdio.h>

 int main () {
    float A , B , temp ;

    printf (" Digite o valor de A: ") ;
    scanf ("%f", & A ) ;

    printf (" Digite o valor de B: ") ;
    scanf ("%f", & B ) ;

    // Troca de valores
    temp = A ;
    A = B ;
    B = temp ;

    printf (" Depois da troca :\n") ;
    printf ("A = %.2 f\n", A ) ;
    printf ("B = %.2 f\n", B ) ;

    return 0;
 }