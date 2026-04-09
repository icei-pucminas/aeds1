#include <stdio.h>

 int main () {
    float salarioMinimo , qtdKw ;
    float valorKw , valorTotal , valorComDesconto ;

    printf (" Digite o valor do salario minimo : ") ;
    scanf ("%f", & salarioMinimo ) ;

    printf (" Digite a quantidade de kilowatts consumida : ");
    scanf ("%f", & qtdKw ) ;

    // valor de 100 kW = 1/7 do salario minimo
    valorKw = ( salarioMinimo / 7.0) / 100.0;

    // valor total a pagar sem desconto
    valorTotal = qtdKw * valorKw ;

    // valor com 10% de desconto
    valorComDesconto = valorTotal * 0.9;

    printf (" Valor de cada kW: R$ %.2 f\n", valorKw ) ;
    printf (" Valor a ser pago : R$ %.2 f\n", valorTotal ) ;
    printf (" Valor com desconto de 10%%: R$ %.2 f\n", valorComDesconto ) ;

    return 0;
}
