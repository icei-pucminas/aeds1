#include <stdio.h>
#include <math.h>

 int main () {
    float base , altura ;
    float perimetro , area , diagonal ;

    printf (" Digite a base do retangulo : ") ;
    scanf ("%f", & base ) ;

    printf (" Digite a altura do retangulo : ") ;
    scanf ("%f", & altura ) ;

    perimetro = 2 * ( base + altura ) ;
    area = base * altura ;
    diagonal = sqrt ( base * base + altura * altura ) ;

    printf (" Perimetro : %.2 f\n", perimetro ) ;
    printf (" Area : %.2 f\n", area ) ;
    printf (" Diagonal : %.2f\n", diagonal ) ;

    return 0;
 }