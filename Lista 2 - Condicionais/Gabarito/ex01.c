# include <stdio.h>

 int main () {
    int num1 , num2 ;
    float divisao ;

    // Leitura dos dois numeros inteiros
    printf (" Digite o primeiro numero inteiro : ") ;
    scanf ("%d", & num1 ) ;

    printf (" Digite o segundo numero inteiro : ") ;
    scanf ("%d", & num2 ) ;

    // Calcula e imprime a diferenca
    int diferenca = num1 - num2 ;
    printf (" Diferenca : %d\n", diferenca ) ;

    // Verifica se o segundo numero e diferente de zero
    if ( num2 != 0) {
        divisao = ( float ) num1 / num2 ;
        printf (" Divisão : %.2 f\n", divisao ) ;
    }else{
        printf ("Não e possivel dividir por zero .\n") ;
    }

    return 0;
 }