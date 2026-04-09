#include <stdio.h>

 int main () {
    
    double numerador , denominador , resultado ; // Variaveis para numerador , denominador e resultado

    // Solicita ao usuario o numerador e denominador
    printf (" Digite o numerador da fracao : ") ;
    scanf ("%lf", & numerador ) ;
    printf (" Digite o denominador da fracao : ") ;
    scanf ("%lf", & denominador ) ;

    // Verifica se o denominador nao e zero para evitar divisao por zero
    if ( denominador != 0) {
        resultado = numerador / denominador ; // Calcula a fracao como numero decimal
        printf ("O numero decimal correspondente e: %.2 lf\n", resultado ) ;
    }else{
        printf (" Erro : o denominador nao pode ser zero .\n") ;
    }

    return 0; // Finaliza o programa
}