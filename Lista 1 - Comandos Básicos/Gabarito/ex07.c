 #include <stdio.h>
 #include <math.h> // Biblioteca para funcoes matematicas , como sqrt ()

 int main () {
    double cateto1 , cateto2 , hipotenusa ; // Variaveis para os catetos e a hipotenusa

    // Solicita ao usuario os valores dos catetos
    printf (" Digite o valor do primeiro cateto : ") ;
    scanf ("%lf", & cateto1 ) ;
    printf (" Digite o valor do segundo cateto : ") ;
    scanf ("%lf", & cateto2 ) ;

    // Calcula a hipotenusa usando o Teorema de Pitagoras : h = sqrt ( cateto1 ^2 + cateto2 ^2)
    hipotenusa = sqrt ( cateto1 * cateto1 + cateto2 * cateto2 ) ;

    // Exibe o resultado
    printf ("A hipotenusa do triangulo e: %.2 lf\n", hipotenusa ) ;

    return 0; // Finaliza o programa
 }