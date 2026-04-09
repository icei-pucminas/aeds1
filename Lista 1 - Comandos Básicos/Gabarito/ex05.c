#include <stdio.h>
#include <math.h> // Biblioteca para funcoes matematicas , como sqrt ()

 int main () {
    double lado , perimetro , area , diagonal ; // Variaveis para o lado , perimetro , area e diagonal

    // Solicita ao usuario que digite o valor do lado do quadrado
    printf (" Digite o lado do quadrado : ") ;
    scanf ("%lf", & lado ) ;

    // Calcula o perimetro do quadrado
    perimetro = 4 * lado ;

    // Calcula a area do quadrado
    area = lado * lado ;

    // Calcula a diagonal do quadrado usando o Teorema de Pitagoras
    diagonal = sqrt (2) * lado ;

    // Exibe os resultados
    printf (" Perimetro : %.2 lf\n", perimetro ) ;
    printf (" Area : %.2 lf\n", area ) ;
    printf (" Diagonal : %.2 lf\n", diagonal ) ;

    return 0; // Finaliza o programa
 }