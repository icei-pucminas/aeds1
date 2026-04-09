#include <stdio.h> // Biblioteca para entrada e saida
#define PI 3.14159265359 // Definindo o valor de PI

int main () {
    double raio , perimetro , area ; // Variaveis para armazenar o raio , perimetro e area

    // Solicita ao usuario que digite o raio do circulo
    printf (" Digite o raio do circulo : ") ;
    scanf ("%lf", & raio ) ; // Le o valor digitado e armazena na variavel ’raio ’

    // Calcula o perimetro ( circunferencia ) do circulo
    perimetro = 2 * PI * raio ;

    // Calcula a area do circulo
    area = PI * raio * raio ;

    // Exibe os resultados
    printf (" Perimetro : %.2 lf\n", perimetro ) ;
    printf (" Area : %.2 lf\n", area ) ;

    return 0; // Finaliza o programa
 }